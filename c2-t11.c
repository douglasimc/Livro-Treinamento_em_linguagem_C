/* Mostra a função getchar() e putchar() */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() e getch() */
int main()
{
    char ch;
    printf("\nPressione uma tecla ");
    ch = getchar();  /*Aguarda uma tecla no teclado */
    printf("\nA tecla sucessora ASCII é ");
    putchar(ch+1);
    putchar('\n');
    system("PAUSE");
    return 0;
}
