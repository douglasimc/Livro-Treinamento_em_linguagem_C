/* Mostra a escrita da fun��o celsius() */
#include <stdio.h>
#include <stdlib.h>

float celsius(float);  /* Prot�tipo externo */

int main()
{
    //float celsius(float);  /* Prot�tipo local n�o funciona com a declara��o de par�metros de celsius() abaixo */
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);     /* Chama � fun��o */

    printf("Celsius = %.2f\n", c);
    system("PAUSE");
    return 0;
}
/* celsius() */
/* Defini��o da fun��o */
/* Outra sintaxe de declara��o de par�metros */
float celsius(fahr)
float fahr; /* Declara��o de par�metros */
{
    return (fahr - 32.0) * 5.0/9.0;
}
