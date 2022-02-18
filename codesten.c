/* codesten.c */
/* C�digo estendido do teclado */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char t1, t2;
    while((t1=getch())!='X')
        if(t1==0)
        {
            t2=getch();
            switch(t2)
            {
                case 59: printf("Tecla F1\n");break;
                case 60: printf("Tecla F2\n");break;
                case 75: printf("Seta esquerda\n");break;
                case 77: printf("Seta direita\n");break;
                default: printf("Algum outro c�digo \n");
            }
        }else
            printf("C�digo normal: %3d = %c\n",t1,t2);
    system("pause");
    return 0;
}
