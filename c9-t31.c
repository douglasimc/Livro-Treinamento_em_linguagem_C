/* Algoritmo qsort e binarySearch com inteiros */
#include <stdio.h>
#include <stdlib.h>

/* Fun��o procura bin�ria para inteiros. Procura entre
 * MatrizOrdena[inicio]..MatrizOrdena[fim] pela chave. Retorna
 * o �ndice do elemento encontrado ou -1 se n�o foi encontrado */
 int binarySearchInt(int MatrizOrdena[],
                     int inicio, int fim, int chave)
{
    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;  /* Divide ao meio */
        if (chave > MatrizOrdena[meio])
            inicio = meio + 1; /* Repete procura a partir do meio */
        else if (chave < MatrizOrdena[meio])
            fim = meio - 1; /* Repete a procura at� o meio */
        else
            return meio;     /* Encontrado, retorna posi��o */
    }
    return -1; /* N�o foi encontrado */
}

/* qsort - fun��o para comparar inteiros */
int compara(const void *a, const void *b)
{    const int *pa = (const int *)a; /* Modifica o tipo do ponteiro */
     const int *pb = (const int *)b; /* Modifica o tipo do ponteiro */
     /* Retorna negativo se a < b e positivo se a > b     */
     return *pa - *pb;
}

int main()
{
    unsigned int tamanho, i, procura;

    int tab[]={ 234, 760, 162, 890, -23, 914, 567, 888, 398, -45};
    printf("\nMatriz Original\n");
    for(i=0; i< 8; i++) printf("%d\n", tab[i]);
    tamanho = sizeof(tab)/sizeof(int);

    qsort(tab, tamanho, sizeof(int), compara);
    printf("\nMatriz Ordenada\n");
    for(i=0; i< 8; i++) printf("%d\n", tab[i]);

    procura = binarySearchInt(tab, 0, tamanho - 1, 567);
    //printf("\n\n�ndice de 567 = %d\n",procura);
    printf("�ndice de 567 = %d\n",procura); // De acordo com a sa�da desejada pelo livro

    system("PAUSE");
    return 0;
}

