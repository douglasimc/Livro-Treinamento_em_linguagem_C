/* Algoritmo qsort com inteiros */
#include <stdio.h>
#include <stdlib.h>

/* qsort - função para comparar inteiros */
int compara(const void *a, const void *b)
{    const int *pa = (const int *)a; /* Modifica o tipo do ponteiro */
     const int *pb = (const int *)b; /* Modifica o tipo do ponteiro */
     /* Retorna negativo se a < b e positivo se a > b     */
     return *pa - *pb;
}

int main()
{
    unsigned int tamanho, i;

    int tab[]={ 234, 760, 162, 890, -23, 914, 567, 888, 398, -45};

    tamanho = sizeof(tab)/sizeof(int);

    qsort(tab, tamanho, sizeof(int), compara);

    for(i=0; i< 8; i++) printf("%d\n", tab[i]);
    system("PAUSE");
    return 0;
}

