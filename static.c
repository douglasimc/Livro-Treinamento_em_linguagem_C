/* static.c */
/* Mostra o uso de vari�veis est�ticas */
#include <stdio.h>
#include <stdlib.h>
int soma(void); /* Prot�tipo */

int main()
{
    printf("%d\n", soma());
    printf("%d\n", soma());
    printf("%d\n", soma());
    system("PAUSE");
    return 0;
}
/* soma() */
/* Usa vari�vel static */
int soma()
{
    static int k;
    k++;
    return k;
}
