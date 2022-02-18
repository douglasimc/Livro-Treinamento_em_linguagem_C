/* Tamanho de campo e complementando com zeros */
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    printf("\n%04d",21);
    printf("\n%06d",21);
    printf("\n%5.4d",21);
    printf("\n%6.0d",21);
    system("PAUSE");
    return 0;
}
