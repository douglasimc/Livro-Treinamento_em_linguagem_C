/* union1.c */
/* Mostra o uso de uniões */
/* Corrigido */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Para strcpy() */
union
{
    char str[30];
    int i;
    float f;
} x; /* Cria variável */

enum DataType
{
    StrType, IntType, FloatType
} Tipo; /* Cria variável */

void StrTipo(char n[])
{
    Tipo=StrType;
    strcpy(x.str, n);
}
void FloatTipo(float n)
{
    Tipo=FloatType;
    x.f=n;
}
void IntTipo(int n)
{
    Tipo=IntType;
    x.i=n;
}

void Print()
{
    switch(Tipo)
    {
            case StrType:
                    printf("Str = %s\n", x.str);
                    break;
            case IntType:
                    printf("Int = %d\n", x.i);
                    break;
            case FloatType:
                    printf("Float = %.2f\n", x.f);
                    break;
    }
}

int main()
{
    float y = 34.56;
    int z = 345;

    StrTipo("VVB - Treinamento de Pessoal"); //Corrigido para ficar igual ao desejado pela livro na saída
    Print();
    IntTipo(z);
    Print();
    FloatTipo(y);
    Print();

    system("PAUSE");
    return 0;
}
