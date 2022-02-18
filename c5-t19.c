/* multfunc.c */
/* Calcula a soma do quadrado de dois n�meros */
#include <stdio.h>
#include <stdlib.h>

float somasqr(float, float);/* Prot�tipo */
float sqr(float); /* Prot�tipo */
float soma(float, float);/* Prot�tipo */

int main()
{
    float a,b;
    printf("Digite dois n�meros: ");
    scanf("%f%f", &a, &b);
    printf("A soma dos quadradros � %f\n" , somasqr(a,b));
    system("PAUSE");
    return 0;
}
/* somasqr()*/
/* Calcula a soma dos quadrados de dois n�meros */
float somasqr(float m, float n)
{
    return soma(sqr(m), sqr(n)) ;
}

/* sqr() */
/* Calcula o quadrado de um n�mero */
float sqr(float z)
{
    return z*z;
}
/* soma() */
/* Calcula a soma de dois n�meros */
float soma(float m, float n)
{
    return m+n ;
}
