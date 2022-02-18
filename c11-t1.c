/* ofilech.c */
/* Grava um caractere por vez num arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    char ch;
    /* Abre arquivo para gravar em modo texto */
    fptr=fopen("arqtext.txt","w");

    while((ch=getch()) != '\r')  /* Lê um caractere do teclado */
            fputc(ch,fptr);      /* Grava caractere no arquivo */
    fclose(fptr);

    system("PAUSE");
    return 0;
}
