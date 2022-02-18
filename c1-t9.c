/****************************************************
 * Este programa mostra a declaração de variáveis   *
 * Prog3.C
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    /* Variáveis devem ser declaradas no início do bloco */
    int num1; /* É obrigatório declarar variáveis em C */
    int num2;

    num1 = 44;
    num2 = num1 + 20;

    printf("\nO primeiro número é %d", num1);
    //printf("\nO segundo número é \"num1 + 20 \" = %d", num2);
    printf("\nO segundo número é \"num1 + 20\" = %d\n", num2); /* Deixando mais bonita a exibição */

    system("PAUSE");
    return 0;
}
