/* adivinha.c */
/* Adivinha n�mero */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,r;
    printf("\nDigite um n�mero de at� 4 algarismos: ");
    scanf("%d",&x);
    r = 19998 + x;
    printf("\nO resultado da soma �: %d",r);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d",&x);
    printf("\nO meu n�mero �: %d",9999-x);
    printf("\nDigite o quarto n�mero: ");
    scanf("%d",&x);
    printf("\nO meu n�mero �: %d", 9999-x);
    system("PAUSE");
    return 0;
}
