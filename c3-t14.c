/* Contachar.C */
/* Conta caracteres de uma frase */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche */
int main()
{
    int cont=0; /* Contador */
    while(getche() != '\r') /* Enquanto n�o [ENTER] */
        cont++; /* Corpo do la�o */
    /* Fora do la�o */
    printf("\nO n�mero de carcteres � de %d" , cont);

    system("PAUSE");
    return 0;
}
