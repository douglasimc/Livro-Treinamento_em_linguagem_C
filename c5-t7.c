/* Mostra a escrita da função celsius() */
#include <stdio.h>
#include <stdlib.h>

float celsius(float);  /* Protótipo externo */

int main()
{
    //float celsius(float);  /* Protótipo local não funciona com a declaração de parâmetros de celsius() abaixo */
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);     /* Chama à função */

    printf("Celsius = %.2f\n", c);
    system("PAUSE");
    return 0;
}
/* celsius() */
/* Definição da função */
/* Outra sintaxe de declaração de parâmetros */
float celsius(fahr)
float fahr; /* Declaração de parâmetros */
{
    return (fahr - 32.0) * 5.0/9.0;
}
