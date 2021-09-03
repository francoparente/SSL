#include "scanner.h"

// Usar función isspace().
// Usar función ungetc().

/**
 * @brief -
 * 
 * @return token 
 */

bool es_cadena (lectura)
{
    return lectura!="," && !isspace(lectura) && lectura!=EOF;
}

Token get_token(char *buffer)
{
    int cursor;
    char lectura = getchar();

    Token tipo_token;

    while(lectura != EOF)
    {
        if(isspace(lectura))
            lectura = getchar(); //si lee un espacio, le digo que siga leyendo (que ignore el espacio).
        
        if(lectura == ",")
            tipo_token = SEP;

        if(es_cadena(lectura)) //si lo que lee es una cadena, entonces...
            tipo_token = CAD;
    }
    return tipo_token;
}