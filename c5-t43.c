#include <stdio.h>
#include <stdlib.h>

#define PROD(x,y) ((x) * (y)) // Resultado não sai como desejado

int main()
{
    int z;
    z = PROD(2 + 3, 4);
    printf("Resultado: %d\n",z);
    system("PAUSE");
    return 0;
}
