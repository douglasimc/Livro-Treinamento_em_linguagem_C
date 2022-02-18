/* ifilech.c */
/* L� um caractere por vez de um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    short int ch;
    /* Abre arquivo para ler em modo texto */
    fptr=fopen("arqtext.txt","r");

    while((ch=fgetc(fptr)) != EOF)  /* L� um caractere do arquivo */
            printf("%c",ch);     /* Imprime o caractere no v�deo */
    fclose(fptr);

    system("PAUSE");
    return 0;
}
