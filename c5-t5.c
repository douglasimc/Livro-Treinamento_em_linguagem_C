#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() */

/* minusculo() */
/* Converte para minúsculo se for maiúsculo */
unsigned char minusculo(unsigned char ch)
{
    if(ch >= 'A' && ch <= 'Z') /* Se maiúsculo? */
        return(ch + 'a'-'A'); /* Devolve convertido */
    else
        return(ch); /* Devolve sem converter */
}
int main()
{
    unsigned char ch ;
    ch=getche(); /* Lê um caractere */
    printf("%c", minusculo(ch));
    system("PAUSE");
    return 0;
}
