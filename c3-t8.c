#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char ch;
    for (;(ch=getch())!='X';printf("%c", ch+1))
            ;
    printf("\n");
    system("PAUSE");
    return 0;
}
