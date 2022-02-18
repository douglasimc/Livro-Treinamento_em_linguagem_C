/* Resultados variam conforme compilador */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=3;
    printf("\n%d\t%d\t%d\n",(i=i+1),(i=i+1),(i=i+1));
    system("PAUSE");
    return 0;
}
