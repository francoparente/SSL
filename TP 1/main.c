#include "scanner.h"

//Notas de clase
/*
el scanner es un programa que es llamado.
el parser usa tokens para armar un arbol.
el main llama a get_token.
no hay que hacer un main que llame un token que haga todo, eso esta mal.
hay que llamar un get_token para que lea varios tokens.
hay q compartir un buffer.
*/

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
