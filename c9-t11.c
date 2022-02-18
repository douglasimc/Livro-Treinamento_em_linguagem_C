/* ptroperacoes.c */
/* Mostra as operações possíveis com ponteiros */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x=5, y=6;
    unsigned int *px, *py, *pz;

    px = &x;     /* Atribuições */
    py = &y;

    if(pz == (unsigned int *)0) // Comparação NULL não está ocorrendo
        printf("Ponteiro z vazio!");
    else
        printf("pz = %p\n", pz);
    if(px == (unsigned int *)0)
        printf("Ponteiro x vazio!");

    if(px < py) /* Comparações */
            printf("py-px= %u\n", (py-px));/* Subtração */
    else
            printf("px-py= %u\n", (px-py));

    printf("px = %p", px);
    printf(", *px = %u", *px);      /* Op. Indireto */
    printf(", &px = %p\n", &px);      /* Op. Endereços */

    printf("py = %p", py);
    printf(", *py = %u", *py);
    printf(", &py = %p\n", &py);

    py++; /* Incremento */ // A incrementação avança 1 int na memória

    printf("py = %p", py);
    printf(", *py = %u", *py);
    printf(", &py = %p\n", &py);

    px = py + 5; /* Somar inteiros */ // Soma de endereços Hexadecimais!!!

    printf("px = %p", px);
    printf(", *px = %u", *px);
    printf(", &px = %p\n", &px);

    printf("px-py= %u\n", (px-py));

    system("PAUSE");
    return 0;
}
