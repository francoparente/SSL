#include<ctype.h>
#include "scanner.h"

/**
 * @brief Muestra en pantalla los resultados devueltos: que token es y el lexema correspondiente
 * 
 * @return token 
 */

int get_token(void){
    //HACER LA FUNCION

    int algo;

    printf("Escriba algo:\n");

    algo = getchar();

    printf("El token introducido es: %c\n", ??);
    printf("El lexema correspondiente es: %c\n", ??);
    

    return 0;
}

// Usar función isspace().
// Usar función ungetc().