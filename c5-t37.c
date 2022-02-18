/* Mostra o uso da diretiva #define */
#include <stdio.h>
#include <stdlib.h>

#define ZEBRA printf("\nDeu Zebra!\n")

int main()
{
    if(ZEBRA)
        printf("\nVERDADEIRO\n");
    else
        printf("\nFALSO\n");
    system("PAUSE");
    return 0;
}
