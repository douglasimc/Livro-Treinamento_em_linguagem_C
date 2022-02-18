/* loteria.c */
/* Imprime 50 combina��es de jogos para a Sena */
#include <stdio.h>
#include <stdlib.h>
#define JOGOS 50
#define N 6

int main()
{
    int matriz[JOGOS][N],r;
    register int k, j ,i;

    for(k = 0; k < JOGOS; k++)
        for(j=0 ; j < N; j++)
        {
            r=rand()%60+1; /* N�mero aleat�rio de 1 a 60 */
            /* Varredura por n�meros repetidos, para n�o salvar na matriz */
            for (i=0;i<=j;i++)
            {
                if (matriz[k][i] == r)
                {
                    j--;
                    break;
                } else if (i==j)
                    matriz[k][i] = r;
            }
        }

    for(k = 0; k < JOGOS; k++)
    {
        printf("Combina��o %2d:     ", k+1);
        for(j = 0; j < N; j++)/* Imprime as dezenas na tela */
                    printf("%2d   ",matriz[k][j]);
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
