/* Resultados variam conforme compilador */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=3,n;
    n = i * (i+1) + (++i);
    printf("\nn = %d\n",n);
    system("PAUSE");
    return 0;
}
