/* ifilech.c */
/* L� um caractere por vez de um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;     /* Ponteiro para arquivo */
    short int ch; // Por causa de EOF que pode ser 0xFFFF
    /* Abre arquivo para ler em modo texto */
    fptr=fopen("arqtext.txt","r");

    while(!feof(fptr))
    {
         ch=fgetc(fptr);
         printf("%c",ch);
    }

    fclose(fptr);

    printf("\n"); // Apenas por est�tica

    system("PAUSE");
    return 0;
}
