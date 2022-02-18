/* ifilech.c */
/* Lê um caractere por vez de um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    short int ch;
    /* Abre arquivo para ler em modo texto */
    fptr=fopen("arqtext.txt","r");

    while((ch=fgetc(fptr)) != EOF)  /* Lê um caractere do arquivo */
            printf("%c",ch);     /* Imprime o caractere no vídeo */
    fclose(fptr);

    system("PAUSE");
    return 0;
}
