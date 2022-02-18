#include <stdio.h>
#include <stdlib.h>
#define DEBUG   1

int main()
{
    char erro1 = 'e', erro2 = 'E';

#if     DEBUG == 1
        printf("\nERRO = %d", erro1);
#elif   DEBUG == 2
        printf("\nERRO = %d", erro2);
#else
        printf("\nERRO não documentado", erro1);
#endif
    system("PAUSE");
    return 0;
}
