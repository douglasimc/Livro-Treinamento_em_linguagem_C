/* pmatriz.c */
/* Imprime os elementos de uma matriz usando notação ponteiro */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int M[5]={92,81,70,69,58};
    int i, *p = M; /* Cria e inicializa o ponteiro variável */

    for(i=0; i<5; i++)
        printf("%d\n", *(p++)); /* Notação ponteiro */

    system("PAUSE");
    return 0;
}
