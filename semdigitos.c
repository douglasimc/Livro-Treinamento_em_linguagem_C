/* semdigitos.c */
/* Elimina impress�o de d�gitos */
/* Mostra o uso de continue */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /* Para o getche() */

int main()
{
    char ch;
    while ((ch=getche())!='X') /* Termina quando digitado X */
    {
        if(ch >= '0' && ch <= '9') /* � d�gito? */
            continue;
        printf("%c", ch);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
