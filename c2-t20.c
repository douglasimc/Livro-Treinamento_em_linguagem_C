/* Mostra operadores relacionais */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z;
    x=4;
    z= (x<(y=5));
    printf("X: %d\nY: %d\nZ: %d\n",x,y,z);

    system("PAUSE");
    return 0;
}
