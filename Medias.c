/* Medias.c - Mostra operadores aritméticos de atribuição */
/* Calcula a média aritmética de 4 notas */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota , media = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f",&nota);
    media += nota;

    printf("\nDigite a segunda nota: ");
    scanf("%f",&nota);
    media += nota;

    printf("\nDigite a terceira nota: ");
    scanf("%f",&nota);
    media += nota;

    printf("\nDigite a quarta nota: ");
    scanf("%f",&nota);
    media += nota;

    media /= 4.0;
    printf("\nMÉDIA: %.2f\n",media);
    system("PAUSE");
    return 0;
}
