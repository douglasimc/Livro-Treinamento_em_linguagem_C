/* Mostra a função getche() */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() e getch() */
int main()
{
    char ch;
    printf("\nPressione uma tecla ");
    ch = getche();  /*Aguarda uma tecla no teclado */
    //ch = getch();  /*Mesma função da anterior, porém sem 'ecoar' a tecla */
    printf("\nA tecla sucessora ASCII é %c.\n",ch+1);
    system("PAUSE");
    return 0;
}
