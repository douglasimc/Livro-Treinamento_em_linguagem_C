#include <stdio.h>
#include <stdlib.h>
int main()
{
    do /*Início do laço */
    printf("\nOlá!\nPara sair pressione 's'\n");
    while(getche()!='s');
    printf("\nAté logo e boa sorte!\n");
    system("PAUSE");
    return 0;
}
