/* Mostra o uso do operador de complemento ~ */
/* Codifica o bytes digitados */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    unsigned char ch;
    while((ch=getch())!= 'X')
           printf("%c", ~ch);
    system("PAUSE");
    return 0;
}
