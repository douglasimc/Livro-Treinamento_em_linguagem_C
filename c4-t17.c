/* semdigitos.c */
/* Elimina impress�o de d�gitos */
/* Mostra o uso de goto */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /* Para o getch() */

int main()
{
    char ch;
    while ((ch=getch())!='X') /* Termina quando digitado X */
    {
        if(ch >= '0' && ch <= '9') /* � d�gito? */
            goto erro; /* Pula para o 'erro:' */
        printf("%c", ch);
    }
    printf("\n");

    system("PAUSE");
    return 0;

    erro:
        printf("\nDigitado um d�gito!");

        system("PAUSE");
        return 0;
}
