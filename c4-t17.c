/* semdigitos.c */
/* Elimina impressão de dígitos */
/* Mostra o uso de goto */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /* Para o getch() */

int main()
{
    char ch;
    while ((ch=getch())!='X') /* Termina quando digitado X */
    {
        if(ch >= '0' && ch <= '9') /* É dígito? */
            goto erro; /* Pula para o 'erro:' */
        printf("%c", ch);
    }
    printf("\n");

    system("PAUSE");
    return 0;

    erro:
        printf("\nDigitado um dígito!");

        system("PAUSE");
        return 0;
}
