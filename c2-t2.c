/* Calcula a idade em dias */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float anos,dias;
    printf("Digite a sua idade em anos: ");
    //scanf("%f",anos); /* Gera erro */
    scanf("%f",&anos);
    dias = anos*365;
    printf("A sua idade em dias é %.0f.\n", dias);
    system("PAUSE");
    return 0;
}
