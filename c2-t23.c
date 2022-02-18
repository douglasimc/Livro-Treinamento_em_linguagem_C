#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d",&x);
    printf("%s\n", x%2 ? "Ímpar" : "Par");

    system("PAUSE");
    return 0;
}
