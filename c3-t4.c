/* Mostra o uso do operador v�rgula no la�o for */
///* Imprime os n�meros de 0 a 98 de 2 em 2 */
/* Imprime os n�meros de 0 a 100 de 2 em 2 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    for (i=0, j=i; (i+j) < 100 ; i++,j++)
        printf("%d " , i +j);

    printf("\n");
    system("PAUSE");
    return 0;
}
