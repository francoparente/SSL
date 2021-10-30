#include "scanner.h"

#define Fin_de_texto EOF

/**
 * @brief Indica si la variable lectura es o no una cadena.
 * 
 * @return true si es una cadena (para eso no debe ser ni coma, ni espacio, ni EOF).
 * @return false si no es una cadena (o es una coma, o un espacio, o EOF).
 */
bool es_cadena (char lectura)
{
    if (lectura!=',' && !isspace(lectura) && lectura!=EOF)
        return true;                //devuelvo true si el parámetro de es_cadena es distinto de coma, espacio o fin de texto.
    else
        return false;               // sino devuelvo false.
}

Token get_token(char *buffer)
{
    int cursor = 0;                 //declaro cursor que me va a ayudar a guardar en el buffer lo que voy leyendo.
    char lectura = getchar();       //declaro variable char donde voy a almacenar el valor que se lee en cada instante.

    Token tipo_token;               //declaro variable de tipo Token (enum).

    while(lectura != Fin_de_texto)  //mientras haya algo que leer, es decir, no sea EOF.
    {
        if(isspace(lectura))        //isspace me dice si lectura es un espacio o no.
        {
            lectura = getchar();    //si lee un espacio, le digo que siga leyendo (que ignore el espacio).
            tipo_token = UNDEFINED; // tipo_token es UNDEFINED.
        }

        if(lectura == ',')          //si lee una coma...
        {
            buffer[cursor] = lectura;   //la guardo en el buffer.
            cursor++;                   //avanzo el cursor del buffer un lugar.
            buffer[cursor] = '\0';      //y cierro el contenido.
            tipo_token = SEP;       //tipo_token es SEP.
        }

        if(es_cadena(lectura))      //si lo que lee es una cadena, entonces...
        {
            for(int i=0; es_cadena(lectura); i++)
            {
                buffer[cursor] = lectura;   //lo que leí lo guardo en el buffer.
                cursor++;                   //adelanto el cursor del buffer para guardar lo proximo que lea.
                lectura = getchar();        //continúo leyendo el siguiente caracter del stdin.
            }
            
            buffer[cursor] = '\0';          //cierro la cadena del buffer.
            ungetc(lectura, stdin);         //retrocedo el cursor del getchar para que vuelva a leer lo ultimo que leyó del stdin (para no perder la ",", si es que hubo).
            
            tipo_token = CAD;               //tipo_token es CAD.
        }

        if(tipo_token != UNDEFINED)
            return tipo_token;      //si tipo_token no es UNDEFINED (espacio) devuelvo el valor. Sino vuelve a empezar el while.
    }

    return FDT; //una vez que sale del while, devuelvo FDT, porque significa que no hay más nada que leer.
}