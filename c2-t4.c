/* adivinha.c */
/* Adivinha número */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,r;
    printf("\nDigite um número de até 4 algarismos: ");
    scanf("%d",&x);
    r = 19998 + x;
    printf("\nO resultado da soma é: %d",r);
    printf("\nDigite o segundo número: ");
    scanf("%d",&x);
    printf("\nO meu número é: %d",9999-x);
    printf("\nDigite o quarto número: ");
    scanf("%d",&x);
    printf("\nO meu número é: %d", 9999-x);
    system("PAUSE");
    return 0;
}
