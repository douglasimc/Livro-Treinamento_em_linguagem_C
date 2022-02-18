/* ninhosif.c */
/* Mostra if aninhados */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Digite uma letra 'a' a 'z': ");
    ch=getche();
    if(ch >= 'a')
        if(ch <= 'z')
            printf("\nVocê digitou uma letra minúscula.");
    printf("\n");
    system("PAUSE");
    return 0;
}
