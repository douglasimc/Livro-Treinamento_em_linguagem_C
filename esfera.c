/* esfera.c */
/* Calcule a área da esfera */
#include <stdio.h>
#include <stdlib.h>

const float PI=3.14159;

float area(float); /* Protótipo */

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
    printf("A area da esfera é %.2f\n",area(raio));
    system("PAUSE");
    return 0;
}
/* area() */
/* Retorna a área da esfera */
float area(float r) /* Definição da função */
{
    return(4 * PI * r * r);
}
