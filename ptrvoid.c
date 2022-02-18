/* ptrvoid.c */
/* Mostra ponteiros void */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    float f=3.2;

    void *pv;     /* Ponteiro genérico */
    pv = &i;      /* Endereço de um int */

    /* Não podemos usar o operador indireto com ponteiros void */
    printf("%d\n", *pv); /* ERRO de compilação */

    pv = &f;      /* Endereço de um float */

    /* Não podemos usar o operador indireto com ponteiros void */
    printf("%f\n", *pv); /* ERRO de compilação */

    system("PAUSE");
    return 0;
}

