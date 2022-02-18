/* Codifica a entrada digitada */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getch() */
int main()
{
    unsigned char ch;
    for (ch=getch(); ch != 'X'; ch=getch())
        printf("%c" , ch +1);
    printf("\n");
    system("PAUSE");
    return 0;
}
