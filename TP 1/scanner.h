#pragma once

//ejemplo de enum:
/*
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
  
int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
} 
*/

typedef enum token_enum{
    FDT,
    CAD,
    SEP
    }token_t;

typedef struct lexema {
    token_t kind;
    char * contenido;
}lexema_t;

int get_token();