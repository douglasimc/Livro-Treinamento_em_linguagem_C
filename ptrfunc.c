/* ptrfunc.c */
/* Mostra o uso de ponteiro para fun��o */
#include <stdio.h>
#include <stdlib.h>

void doisbeep(void); /* Prot�tipo */

int main()
{
    void (*pf)(void);/* Ponteiro para fun��o void que recebe void */

    pf = doisbeep; /* Nome da fun��o sem os par�nteses */

    (*pf)();/* Chama a fun��o */

    system("PAUSE");
    return 0;
}

/* doisbeep() */
/* Toca o alto-falante duas vezes */
void doisbeep(void)
{
    unsigned i;
    printf("\a");
    for(i=0; i < 800000 ; i++); /* Dar um tempo */
    printf("\a");
}
