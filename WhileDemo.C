/* WhileDemo.C */
/* Mostra um uso simples do laço while no lugar de um laço for */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0; /* Inicialização */
    while(i < 20) /* Teste */
    {
        printf("%c",'*');
        i++;
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
