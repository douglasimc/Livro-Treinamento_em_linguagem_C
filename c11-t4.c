/* ifilech.c */
/* Lê um caractere por vez de um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    short int ch;

    //if((fptr = fopen("arqtext1.txt","r")) == NULL) // Para teste
    if((fptr = fopen("arqtext.txt","r")) == NULL)
    {
     puts("Não foi possível abrir o arquivo");
     exit(1);
    }

    while((ch=fgetc(fptr)) != EOF)  /* Lê um caractere do arquivo */
     printf("%c",ch);          /* Imprime o caractere no vídeo */
    fclose(fptr);

    printf("\n"); // Apenas por estética

    system("PAUSE");
    return 0;
}
