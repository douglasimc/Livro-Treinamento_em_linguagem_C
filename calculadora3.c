/* calculadora.c */
/* Simula uma calculadora de 4 operações*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TRUE=1;
    while (TRUE) /* Sempre verdadeiro */
    {
        float n1,n2;
        char op;

        printf("\nDigite número operador número: ");
        scanf("%f%c%f", &n1, &op, &n2);

        if(n1==0.0) break;/*Termina se Zero digitado*/

        if(op == '+')
            printf("\n%f", n1 + n2);
        else if(op=='-')
            printf("\n%f", n1 - n2);
        else if(op=='*')
            printf("\n%f", n1 * n2);
        else if(op=='/')
            printf("\n%f", n1 / n2);
        else
            printf("Op. desconhecido.");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
