/* notas.c */
/* Calcula a m�dia de cinco notas (usa matriz) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int tam = 5; /* N�o recomendado pelo livro */
    int notas[tam];
    int i;
    float media = 0.0;

        for(i=0 ; i < 5 ; i++)
    {
        printf("Digite a nota do aluno %d : ", i+1); /* Exibi��o corrigida */
        scanf("%d",&notas[i]);
        media += notas[i];
        }

    media /= 5.0;
    printf("M�dia das notas: %.2f\n", media); /* Resultado errado no livro */

    system("PAUSE");
    return 0;
}
