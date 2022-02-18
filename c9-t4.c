#include <stdio.h>
#include <stdlib.h>

void troca (int, int); /* Protótipo */

int main()
{

    int a=3,b=7;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    troca(a,b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    system("PAUSE");
    return 0;
}

void troca(int x, int y) /* ERRADO */
{
    int temp;
    temp = x;
    x= y;
    y = temp;
}
