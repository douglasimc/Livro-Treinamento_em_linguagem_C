/* doisbeep.c */
/* Testa a fun��o doisbeep */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void doisbeep(void); /* Prot�tipo */

int main()
{
    doisbeep();
    printf("Digite um caractere: ");
    getche();
    doisbeep();
    system("PAUSE");
    return 0;
}
/* doisbeep() */
/* Toca o auto-falante duas vezes */
void doisbeep()
{
    int k;
    printf("\x7");
    for(k=1;k<5000;k++);
    printf("\x7");
}
