/* contapal.c */
/* Conta caracteres e palavras de uma frase */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int nch = 0;
    int npalavras = 0;
    char ch;

    printf("Digite uma frase:\n");

    while((ch=getche())!= '\r') /* Termina com [enter] */
    {
        nch++; /* Conta caracteres */
        if(ch ==' ')/* Espaço em branco? */
            npalavras++;
    }

    printf("\n\nForam contados %d caracteres ", nch);
    printf("e %d palavras nesta frase.\n", npalavras+1); /* Tem problemas com frases vazias */

    system("PAUSE");
    return 0;
}
