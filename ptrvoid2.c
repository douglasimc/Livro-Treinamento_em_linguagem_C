/* ptrvoid.c */
/* Mostra ponteiros void */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *pi;
    float f=3.2, *pf;

    void *pv;     /* Ponteiro gen�rico */
    pv = &i;      /* Endere�o de um int */

    pi = (int *)pv; /* Convertendo o tipo do ponteiro */
    printf("%d\n", *pi); /* Correto */

    pv = &f;      /* Endere�o de um float */

    pf = (float *)pv; /* Convertendo o tipo do ponteiro */
    printf("%f\n", *pf); /* Correto */

    system("PAUSE");
    return 0;
}
