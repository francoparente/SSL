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

enum token_enum{FDT, CAD, SEP};

typedef struct token {
    int tipo;
    char * contenido;
}token_struct;

int get_token();