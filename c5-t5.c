#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() */

/* minusculo() */
/* Converte para min�sculo se for mai�sculo */
unsigned char minusculo(unsigned char ch)
{
    if(ch >= 'A' && ch <= 'Z') /* Se mai�sculo? */
        return(ch + 'a'-'A'); /* Devolve convertido */
    else
        return(ch); /* Devolve sem converter */
}
int main()
{
    unsigned char ch ;
    ch=getche(); /* L� um caractere */
    printf("%c", minusculo(ch));
    system("PAUSE");
    return 0;
}
