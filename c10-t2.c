#include <stdio.h>
#include <stdlib.h>

int palavra()
{
    unsigned int n = ~0; /* Todos os bits ligados */
    int i;
    for(i = 0; n ; i++) /* Enquanto n n�o for zero */
            n <<= 1;
    return i;
}

int main()
{
    int t = palavra();
    printf("O tamanho da palavra dessa m�quina � %d bits.\n", t);
    system("PAUSE");
    return 0;
}
