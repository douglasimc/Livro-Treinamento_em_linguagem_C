#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main()
{
    char str[81];

    fgets(str,80,stdin);
    fputs(str,stdout);

    system("PAUSE");
    return 0;
}
