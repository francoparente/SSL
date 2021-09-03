#include "scanner.h"
#include <stdbool.h>

#define Fin_de_texto EOF

// Usar función isspace().
// Usar función ungetc().

bool es_cadena (lectura)
{
    if (lectura!="," && !isspace(lectura) && lectura!=EOF)
        return true;                //devuelvo true si el parámetro de es_cadena es distinto de coma, espacio o fin de texto.
    else
        return false;               // sino devuelvo false.
}

Token get_token(char *buffer)
{
    int cursor = 0;                 //declaro cursor que me va a ayudar a guardar en el buffer lo que voy leyendo.
    char lectura = getchar();       //declaro variable char donde voy a almacenar el valor que se lee en cada instante.

    Token tipo_token;               //declaro variable de tipo Token (enum).

    while(lectura != Fin_de_texto)
    {
        if(isspace(lectura))
        {
            lectura = getchar();    //si lee un espacio, le digo que siga leyendo (que ignore el espacio).
            tipo_token = UNDEFINED; // tipo_token es UNDEFINED.
        }

        if(lectura == ",")          //si lee una coma...
        {
            buffer[cursor] = lectura;
            cursor++;
            buffer[cursor] = "\0";
            

            tipo_token = SEP;       //tipo_token es SEP.
        }

        if(es_cadena(lectura))      //si lo que lee es una cadena, entonces...
            tipo_token = CAD;       //tipo_token es CAD.

        if(tipo_token != UNDEFINED)
            return tipo_token;      //si tipo_token no es UNDEFINED (espacio) devuelvo el valor. Sino vuelve a empezar el while.
    }

    return FDT; //una vez que sale del while, devuelvo FDT, porque significa que no hay más nada que leer.
}