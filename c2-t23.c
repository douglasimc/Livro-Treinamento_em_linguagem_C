#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    int x;
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&x);
    printf("%s\n", x%2 ? "�mpar" : "Par");

    system("PAUSE");
    return 0;
}
