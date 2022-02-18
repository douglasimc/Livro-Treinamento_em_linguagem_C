/* contazeros.c */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    int cont=0;

    printf("Digite uma frase\n");

    while((ch=getche())!= '\r')
        if(ch=='0')
        {
            printf("\nZERO detectado\n");
            cont++;
        }
        if(cont > 0)
        printf("Você digitou %d zeros.\n", cont);
        else
        printf("Você não digitou nenhum zero.");

    system("PAUSE");
    return 0;
}
