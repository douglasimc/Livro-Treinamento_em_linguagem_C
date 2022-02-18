/* Mostra o uso do operador vírgula no laço for */
///* Imprime os números de 0 a 98 de 2 em 2 */
/* Imprime os números de 0 a 100 de 2 em 2 */
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
