/* ofileformat.c */
/* Grava dados formatados em um arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>
#include <string.h>
#define TRUE 1

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    char titulo[30];
    int regnum;
    double preco;
    fptr = fopen("livros.txt","w");
    while (TRUE)
    {
        printf("\nDigite título, registro e preço do livro: ");
        scanf("%s %d %lf",titulo,&regnum,&preco);
        if(strlen(titulo) <= 1) break;
        fprintf(fptr,"%s %d %.2lf\n",titulo,regnum,preco);
    }

    fclose(fptr);
    system("PAUSE");
    return 0;
}
