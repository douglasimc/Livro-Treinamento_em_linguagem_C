/****************************************************
 * Este programa mostra a declara��o de vari�veis   *
 * Prog3.C
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    /* Vari�veis devem ser declaradas no in�cio do bloco */
    int num1; /* � obrigat�rio declarar vari�veis em C */
    int num2;

    num1 = 44;
    num2 = num1 + 20;

    printf("\nO primeiro n�mero � %d", num1);
    //printf("\nO segundo n�mero � \"num1 + 20 \" = %d", num2);
    printf("\nO segundo n�mero � \"num1 + 20\" = %d\n", num2); /* Deixando mais bonita a exibi��o */

    system("PAUSE");
    return 0;
}
