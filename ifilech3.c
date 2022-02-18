/* ifilech.c */
/* L� um caractere por vez de um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    short int ch;

    if((fptr = fopen("arqtext.txt","r")) == NULL)
    {
     puts("N�o foi poss�vel abrir o arquivo");
     exit(1);
    }

    while((ch=fgetc(fptr)) != EOF)  /* L� um caractere do arquivo */
     printf("%c",ch);          /* Imprime o caractere no v�deo */
    fclose(fptr);

    system("PAUSE");
    return 0;
}
