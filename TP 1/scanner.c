#include <ctype.h>
#include "scanner.h"

// Usar función isspace().
// Usar función ungetc().

/**
 * @brief Muestra en pantalla los resultados devueltos: que token es y el lexema correspondiente
 * 
 * @return token 
 */

token_struct get_token(void){
    //HACER LA FUNCION

    int algo;

    printf("Escriba algo:\n");

    algo = getchar();

    printf("El token introducido es: %c\n", ??);
    printf("El lexema correspondiente es: %c\n", ??);
    

    return 0;
}

token_t get_token()
{
    char ch;
    ch = getchar();

    switch (ch)
    {
        case EOF:
            return FDT;
            break;
        case ',':
            return SEP;
            break;
        default:
            return CAD;
            break;
    }

    printf (": %c", ch);
}