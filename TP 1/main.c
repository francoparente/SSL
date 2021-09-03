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
    // enum token_enum token;

    Token token;
    token = get_token();

    

    return 0;
}


