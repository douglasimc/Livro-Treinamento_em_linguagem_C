/* ForDemo.c */
/* Mostra um uso simples do laço for */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i=0 ; i < 20 ; i++) /* Imprime 20 * */
        printf("%c",'*');

    printf("\n");
    system("PAUSE");
    return 0;
}
