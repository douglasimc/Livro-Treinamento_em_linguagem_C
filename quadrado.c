/* quadrado.c */
/* Calcule o quadrado de números */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n, soma=0;
    printf("Digite um número:\n");
    scanf("%d", &n);
    printf("O quadrado de %d é ", n);

    if(n < 0) n = -n; /* Se negativo, muda o sinal  */

    for (i=1 ; n > 0; n--)
    {
        soma  += i;
        i += 2;
    }
    printf("%d.\n", soma);
    system("PAUSE");
    return 0;
}
