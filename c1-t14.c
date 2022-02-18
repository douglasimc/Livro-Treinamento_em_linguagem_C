/* Tamanho de campo com ponto flutuante */
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    float lapis=4.875,borrachas=234.542,canetas=42.036,
    cadernos=8.0,fitas=13.05;
    printf("\nLápis          %12.2f",lapis);
    printf("\nBorrachas      %12.2f",borrachas);
    printf("\nCanetas        %12.2f",canetas);
    printf("\nCadernos       %12.2f",cadernos);
    printf("\nFitas          %12.2f",fitas);
    system("PAUSE");
    return 0;
}
