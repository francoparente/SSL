#include "scanner.h"

int main (void)
{
    Token token = get_token();

    char * buffer[256];

    printf("\n");

    while(token != FDT)
    {
        if(token == SEP)
        {
            printf("Separador: %s \n", buffer);
        }
        
        else if(token == CAD)
        {
            printf("Cadena: %s \n", buffer);
        }

        token = get_token(buffer);
    }

    printf("--- Fin de texto --- \n");
}