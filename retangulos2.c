/* retangulos.c */
/* Desenha cômodos de uma casa */
#include <stdio.h>
#include <stdlib.h>

void retangulo(int, int);   /* Protótipo */

int main()
{
    printf("Sala\n");
    retangulo(22,12);
    printf("Cozinha\n");
    retangulo(16,16);
    printf("Banheiro\n");
    retangulo(6,8);
    printf("Quarto\n");
    retangulo(12,12);
    printf("\n");

    system("PAUSE");
    return 0;
}
/* retangulo() */
/* Desenha um retângulo na tela */
retangulo(largura,altura)
int largura,altura;
{
    int j, k;
    largura /=2;
    altura  /=4;

    for(j=1; j<= altura; j++)
    {
        printf("\t\t");
        for(k=1; k<=largura; k++) printf("\xDB");
        printf("\n");
    }
}
