/* Não compila sem a variável externa compilada por outro programa */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    extern int i, j;/* Variáveis que devem ser criadas por programas externos, nestes não serão criadas */
    printf("%d\t%d\t\n", i, j);
    system("PAUSE");
    return 0;
}
