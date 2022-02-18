/* multfunc.c */
/* Calcula a soma do quadrado de dois números */
#include <stdio.h>
#include <stdlib.h>

float somasqr(float, float);/* Protótipo */
float sqr(float); /* Protótipo */
float soma(float, float);/* Protótipo */

int main()
{
    float a,b;
    printf("Digite dois números: ");
    scanf("%f%f", &a, &b);
    printf("A soma dos quadradros é %f\n" , somasqr(a,b));
    system("PAUSE");
    return 0;
}
/* somasqr()*/
/* Calcula a soma dos quadrados de dois números */
float somasqr(float m, float n)
{
    return soma(sqr(m), sqr(n)) ;
}

/* sqr() */
/* Calcula o quadrado de um número */
float sqr(float z)
{
    return z*z;
}
/* soma() */
/* Calcula a soma de dois números */
float soma(float m, float n)
{
    return m+n ;
}
