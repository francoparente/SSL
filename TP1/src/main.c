#include "scanner.h"

int main (void)
{
    char buffer[255]; //declaro un buffer (array de char) de 255 bytes al cual se le va a agregar el '\0'. 

    Token token = get_token(buffer); //llamo a get_token y le paso el buffer declarado.

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