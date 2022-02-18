/* Algoritmo qsort e binarySearch com estruturas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Exemplo com estrutura */
struct est_pop
{
    char estado[16];
    int pop; /* Popula��o */
};

/* qsort - fun��o para comparar struct por popula��o (membro int) */
int struct_cmp_por_pop(const void *a, const void *b)
{
    struct est_pop *pa = (struct est_pop *)a;
    struct est_pop *pb = (struct est_pop *)b;
    return pa->pop - pb->pop;/* neg. se a<b e pos. se a>b */
    //return (*pa).pop - (*pb).pop;/* neg. se a<b e pos. se a>b */ //Equivalente
}


/* qsort - fun��o para comparar struct por popula��o (membro int) */
int struct_cmp_por_estado(const void *a, const void *b)
{
    struct est_pop *pa = (struct est_pop *)a;
    struct est_pop *pb = (struct est_pop *)b;
    return strcmp(pa->estado, pb->estado);/* neg. se a<b e pos. se a>b */
    //return strcmp((*pa).estado, (*pb).estado);/* neg. se a<b e pos. se a>b */ //Equivalente
}

int main()
{
    unsigned int tamanho, i;
    struct est_pop structs[] = /* Popula��o dividido por 1000 */
           {{"Sergipe   ", 1968}, {"Bahia   ", 13815},
            {"Piau�     ", 3007}, {"Acre    ", 670},
            {"Rond�nia  ", 1535 }, {"Tocantis ", 1306}};

    tamanho = sizeof(structs) / sizeof(struct est_pop);
    /* Imprime matriz de estruturas original */
    puts("Estrutura Original");
    for(i=0; i<tamanho; i++)
        printf("[ estado: %s \t popula��o: %6d000 ]\n",
        structs[i].estado, structs[i].pop);
    puts("==================================================");
    /* Ordena usando a fun��o qsort */
    qsort(structs, tamanho, sizeof(struct est_pop),
                               struct_cmp_por_pop);
    /* Imprime matriz de estruturas ordenada */
    puts("Estrutura ordenada por popula��o");
    for(i=0; i<tamanho; i++)
        printf("[ estado: %s \t popula��o: %6d000 ]\n",
        structs[i].estado, structs[i].pop);
    puts("==================================================");
    puts("Estrutura ordenada por estado");
    /* Reordena usando a fun��o qsort */
    qsort(structs, tamanho, sizeof(struct est_pop),
                               struct_cmp_por_estado);
    /* Imprime matriz de estruturas ordenada */
    for(i=0; i<tamanho; i++)
        printf("[ estado: %s \t popula��o: %6d000 ]\n",
        structs[i].estado, structs[i].pop);
    puts("==================================================");
    system("PAUSE");
    return 0;
}

