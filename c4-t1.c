/* ifdemo.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos;
    printf("Quantos anos você tem? \n");

    scanf("%d", &anos);

    if(anos < 30) /* Toma uma decisão caso anos < 30 */
        printf("Você é muito jovem!\n");

    system("PAUSE");
    return 0;
}
