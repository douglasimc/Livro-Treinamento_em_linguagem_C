/* N�o compila sem a vari�vel externa compilada por outro programa */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    extern int i, j;/* Vari�veis que devem ser criadas por programas externos, nestes n�o ser�o criadas */
    printf("%d\t%d\t\n", i, j);
    system("PAUSE");
    return 0;
}
