/* teclas.c */
/* Imprime código das teclas pressionadas */
/* Reconhece o código estendido do teclado */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getch() */

int main()
{
    char tecla1, tecla2;
    while((tecla1=getch())!='X')
        if(tecla1==0)
        {
            tecla2=getch();
            printf("%3d %3d\n",tecla1,tecla2);
        }else
            printf("%3d\n",tecla1);
    system("pause");
    return 0;
}
