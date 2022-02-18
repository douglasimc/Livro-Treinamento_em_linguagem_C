/* Contachar.C */
/* Conta caracteres de uma frase */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche */
int main()
{
    int cont=0; /* Contador */
    while(getche() != '\r') /* Enquanto não [ENTER] */
        cont++; /* Corpo do laço */
    /* Fora do laço */
    printf("\nO número de carcteres é de %d" , cont);

    system("PAUSE");
    return 0;
}
