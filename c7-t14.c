/* notas.c */
/* Mostra passagem de matrizes para fun��es como argumento */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50

float media(float[], int);/* Prot�tipo */

int main()
{
    float notas[TAMANHO] , m;
    int i=0;

    do
    {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f",&notas[i]);
    } while(notas[i++] >= 0.0);

    i--; /* Remove o item de t�rmino */

    m = media(notas, i);

    printf("M�dia das notas: %.2f\n", m);

    system("PAUSE");
    return 0;
}

/* Calcula a m�dia dos valores da matriz */
float media(float lista[], int tamanho)
{
    int i;
    float m=0.0;
    for(i=0; i < tamanho ; i++) m += lista[i];
    return m/tamanho ;
}
