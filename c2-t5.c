/* Converte temperaturas de graus Celsius para Fahrenheit */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float ftemp,ctemp;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f",&ctemp);
    ftemp=ctemp * 9/5 + 32;
    printf("\nTemperatura em graus Fahrenheit é %.2f\n",ftemp);

    system("PAUSE");
    return 0;
}
