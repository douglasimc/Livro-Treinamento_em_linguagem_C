/* malloc.c */
/* Mostra o uso de malloc() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;

    pi = (int *) malloc(sizeof(int));

    puts("Digite um n�mero: ");
    scanf("%d", pi);
    printf("\nVoc� digitou o n�mero %d\n", *pi);

    free(pi);

    system("PAUSE");
    return 0;
}

