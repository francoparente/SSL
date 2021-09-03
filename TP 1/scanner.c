#include "scanner.h"

// Usar función isspace().
// Usar función ungetc().

/**
 * @brief -
 * 
 * @return token 
 */

Token get_token(char *buffer)
{
    int cursor;
    char lectura = getchar();

    Token tipo_token;

    while(lectura != EOF)
    {
        if(isspace(lectura))
            lectura = getchar(); //si lee un espacio, le digo que siga leyendo (que ignore el espacio).
    
        if(es_cadena(lectura)
        {
            
        }
    
    }


    return tipo_token;
}