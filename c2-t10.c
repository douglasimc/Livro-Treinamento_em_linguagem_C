/* Mostra a fun��o getche() */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() e getch() */
int main()
{
    char ch;
    printf("\nPressione uma tecla ");
    ch = getche();  /*Aguarda uma tecla no teclado */
    //ch = getch();  /*Mesma fun��o da anterior, por�m sem 'ecoar' a tecla */
    printf("\nA tecla sucessora ASCII � %c.\n",ch+1);
    system("PAUSE");
    return 0;
}
