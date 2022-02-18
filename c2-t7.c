/* Mostra o uso de const para declarar constantes*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    const char Bip = '\a'; /*Declaração de constante*/
    const double Pi = 3.141592;/*Declaração de constante*/
    double raio,area;

    printf("\nDigite o raio da esfera: ");
    scanf("%lf",&raio);

    area = 4.0 * Pi * raio * raio;

    printf("%c%c",Bip,Bip);
    printf("\nArea da esfera = %.2lf\n",area);
    system("PAUSE");
    return 0;
}
