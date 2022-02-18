#include <stdio.h>
#include <stdlib.h>

#define SOMA(x,y) (x + y)

int main()
{
    int A,B;
    A = SOMA(3.48,4.5);     /* Valores float */
    B = SOMA(2  , 3);       /* Valores int */
    printf("Resultado de A: %d\n",A);
    printf("Resultado de B: %d\n",B);
    system("PAUSE");
    return 0;
}
