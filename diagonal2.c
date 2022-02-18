/* diagonal2.c */
/* Desenha duas linhas diagonais cruzadas */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    system("cls");
    for(lin=1; lin < 25; lin++)/* Passo da descida */
    {
        for(col=1; col < 25; col++)/* Passo da largura */
            if(lin==col) /* Estamos na diagonal 1? */
                printf("\xDB"); /* Desenha bloco escuro */
            else
                if (col == 25 - lin)/* Estamos na diagonal 2? */
                    printf("\xDB"); /* Desenha bloco escuro */
                else
                    printf("\xB0"); /* Desenha bloco claro */
        printf("\n");/* Pula de linha */
    }
    system("PAUSE");
    return 0;
}
