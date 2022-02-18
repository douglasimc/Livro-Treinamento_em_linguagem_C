/* Mostra matriz de três dimensões */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tresd[3][2][4] =
    {
     {
         {1,2,3,4},
         {5,6,7,8}
     },
     {
         {7,9,3,2},
         {4,6,8,3}
     },
     {
         {7,2,6,3},
         {0,1,9,4}
     }
    };

    if (
        tresd[2][1][0]==0
        )
        printf("Encontrado o %d\n",tresd[2][1][0]);

    system("PAUSE");
    return 0;
}
