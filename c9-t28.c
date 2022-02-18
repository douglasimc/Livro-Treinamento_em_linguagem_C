/* ptrvoid.c */
/* Mostra ponteiros void */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    float f=3.2;

    void *pv;     /* Ponteiro gen�rico */
    pv = &i;      /* Endere�o de um int */

    /* N�o podemos usar o operador indireto com ponteiros void */
    //printf("%d\n", *pv); /* ERRO de compila��o */

    pv = &f;      /* Endere�o de um float */

    /* N�o podemos usar o operador indireto com ponteiros void */
    //printf("%f\n", *pv); /* ERRO de compila��o */

    system("PAUSE");
    return 0;
}

