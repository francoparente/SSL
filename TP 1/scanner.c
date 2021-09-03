#include "scanner.h"
#include <stdbool.h>

// Usar función isspace().
// Usar función ungetc().

bool es_cadena (lectura)
{
    if (lectura!="," && !isspace(lectura) && lectura!=EOF)
        return true; //devuelvo true si el parámetro de es_cadena es distinto de coma, espacio o fin de texto.
    else
        return false; // sino devuelvo falso
}

Token get_token(char *buffer)
{
    int cursor;
    char lectura = getchar();

    Token tipo_token;

    while(lectura != EOF)
    {
        if(isspace(lectura))
        {
            lectura = getchar(); //si lee un espacio, le digo que siga leyendo y no devuelve nada (que ignore el espacio).
            tipo_token = EOF;
        }

        if(lectura == ",")      //si lee una coma...
            tipo_token = SEP;   //get_token devuelve SEP

        if(es_cadena(lectura))  //si lo que lee es una cadena, entonces...
            tipo_token = CAD;   //get_token devuelve SEP

        if(tipo_token )
        return tipo_token;
    }

    return FDT;
}