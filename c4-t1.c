/* ifdemo.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos;
    printf("Quantos anos voc� tem? \n");

    scanf("%d", &anos);

    if(anos < 30) /* Toma uma decis�o caso anos < 30 */
        printf("Voc� � muito jovem!\n");

    system("PAUSE");
    return 0;
}
