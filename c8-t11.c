#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct
    {
        int dia;
        char mes[10];
        int ano;
    } Data;
    static Data natal = {25,"dezembro",2001};
    static Data aniversario = {30, "julho" ,1995};

    printf("Natal: %d de %s de %d\n", natal.dia, natal.mes, natal.ano);
    printf("Aniversário: %d de %s de %d\n", aniversario.dia, aniversario.mes, aniversario.ano);

    system("PAUSE");
    return 0;
}
