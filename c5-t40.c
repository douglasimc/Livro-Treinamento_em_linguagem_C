#include <stdio.h>
#include <stdlib.h>

#define SOMA(x,y) x + y // Resultado n�o sai como desejado

int main()
{
    int z;
    z = 10 * SOMA(3,4);
    printf("Resultado: %d\n",z);
    system("PAUSE");
    return 0;
}
