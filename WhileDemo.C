/* WhileDemo.C */
/* Mostra um uso simples do la�o while no lugar de um la�o for */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0; /* Inicializa��o */
    while(i < 20) /* Teste */
    {
        printf("%c",'*');
        i++;
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
