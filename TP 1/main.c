#include<stdio.h>

//Notas de clase
/*
el scanner es un programa que es llamado.
el parser usa tokens para armar un arbol.
el main llama a gettoken.
no hay que hacer un main que llame un token que haga todo, eso esta mal.
hay que llamar un gettoken para que lea varios tokens.
hay q compartir un buffer.
*/

int main (void){

    get_token();


    return 0;
}

