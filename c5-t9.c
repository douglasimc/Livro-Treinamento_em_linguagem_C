/* moldtext.C */
/* Envolve um texto por uma moldura */
#include <stdio.h>
#include <stdlib.h>

void linha(int); /* Prot�tipo */

int main()
{
    linha(20);
    printf("\xDB UM PROGRAMA EM C \xDB\n");
    linha(20);
    system("PAUSE");
    return 0;
}
/* linha() */
/* Desenha uma linha s�lida na tela, n caracteres */
void linha(int n)
{
    int j;
    for(j=1; j<=n; j++)
        printf("\xDB");
    printf("\n");
}
