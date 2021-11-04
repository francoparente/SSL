
#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

typedef enum {UNDEFINED, FDT, CAD, SEP} Token;
//defino un tipo de dato Token, que a su vez es un enum, es decir,
//puede tomar los 4 valores que se ven en la lista (UNDEFINED=0, FDT=1, CAD=2, SEP=3).

/**
 * @brief Obtiene el tipo de token correspondiente a lo que se leyó.
 * 
 * @param buffer 
 * @return Qué tipo de token es (CAD, SEP o FDT).
 */
Token get_token();