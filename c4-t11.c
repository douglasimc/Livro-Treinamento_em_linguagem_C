/* bomdia.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;

    printf("Digite a data de hoje: dd/mm\n");
    scanf("%d%*c%d",&dia,&mes);

    if(mes==12 && dia == 25)
        printf("FELIZ NATAL!\n");
    else
        printf("BOM DIA!\n");

    system("PAUSE");
    return 0;
}
