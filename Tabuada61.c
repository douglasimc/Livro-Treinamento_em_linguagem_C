/* Tabuada61.c */
/* Imprime a tabuada do 6 invertida */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i=9 ; i > 0 ; i--)
        printf("\n%4d x 6 = %4d" , i , i*6);

    printf("\n");
    system("PAUSE");
    return 0;
}
