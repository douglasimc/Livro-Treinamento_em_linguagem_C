/* Mostra o uso da diretiva #define */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float area(float); /* Prot�tipo */

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
    printf("A �rea da esfera � %.2f\n",area(raio));
    system("PAUSE");
    return 0;
}
/* area() */
/* Retorna a �rea da esfera */
float area(float r)
{
    return (4 * PI * r * r);
}
