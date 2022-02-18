/* Multipl3.c */
/* Imprime os múltiplos de 3 entre 3 e 100 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i=3 ; i <= 100 ; i+=3)
        printf("%d\t" , i);

    printf("\n");
    system("PAUSE");
    return 0;
}
