/* diagonal2.c */
/* Desenha duas linhas diagonais cruzadas usando ou lógico */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    system("cls");
    for(lin=1; lin < 25; lin++)/* Passo da descida */
    {
        for(col=1; col < 25; col++)/* Passo da largura */
            if(lin==col || col== 25-lin) /* Diagonal 1 ou 2? */
                printf("\xDB"); /* Desenha bloco escuro */
            else
                printf(" "); /* Desenha bloco claro */
        printf("\n");/* Pula de linha */
    }
    system("PAUSE");
    return 0;
}
