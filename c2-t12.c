/* Conversão de tipo automática */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;

    x=0;
    y=4;
    printf("X: %d\nY: %d\n",x,y);
    x=++y;
    printf("----\nX: %d\tY: %d\n",x,y);
    printf("----------------\n");
    x=0;
    y=4;
    printf("X: %d\nY: %d\n",x,y);
    x=y++;
    printf("----\nX: %d\tY: %d\n",x,y);
    printf("----------------\n");
    x=0;
    y=4;
    printf("X: %d\nY: %d\n",x,y);
    x=4 * y++;
    printf("----\nX: %d\tY: %d\n",x,y);
    printf("----------------\n");
    x=0;
    y=4;
    printf("X: %d\nY: %d\n",x,y);
    x=4 * ++y;
    printf("----\nX: %d\tY: %d\n",x,y);
    printf("----------------\n");
    x=0;
    y=4;
    printf("X: %d\nY: %d\n",x,y);
    y--;
    --y;
    x=4 * y;
    printf("----\nX: %d\tY: %d\n",x,y);

    system("PAUSE");
    return 0;
}
