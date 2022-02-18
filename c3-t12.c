/* Tabuada.C */
/* Imprime as tabuadas do 2 a 9 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    system("cls");/*Limpa a tela */

    for(k=0; k<=1 ; k++)
    {
        printf("\n");
        for(i=1 ; i <= 4 ; i++)
            printf("TABUADA DO %3d   ", i+4*k+1);
        printf("\n");

        for(i = 1; i <= 9 ; i++)
        {
            for(j=2+4*k; j <= 5+4*k; j++)
                printf("%3d x %d = %4d   ",j,i,j*i);
            printf("\n");
        }
    }
    system("PAUSE");
    return 0;
}
