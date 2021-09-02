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

enum token
{
    FDT=EOF,
    CAD,
    SEP= ','
};

typedef struct token {
    char kind;        // what kind of token
    double value;
};

int get_token();