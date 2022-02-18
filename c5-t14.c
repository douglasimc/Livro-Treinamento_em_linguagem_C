/* esfera.c */
/* Calcule a �rea da esfera */
#include <stdio.h>
#include <stdlib.h>

const float PI=3.14159;

float area(float); /* Prot�tipo */

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
    printf("A area da esfera � %.2f\n",area(raio));
    system("PAUSE");
    return 0;
}
/* area() */
/* Retorna a �rea da esfera */
float area(float r) /* Defini��o da fun��o */
{
    return(4 * PI * r * r);
}
