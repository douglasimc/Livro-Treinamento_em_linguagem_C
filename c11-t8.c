/* ifileformat.c */
/* Lê dados formatados do arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    char titulo[30];
    int regnum;
    double preco;
    fptr = fopen("livros.txt","r");

    while (fscanf(fptr,"%s %d %lf", titulo, &regnum, &preco) != EOF)
           printf("%s %d %.2lf\n", titulo, regnum, preco);

    fclose(fptr);
    system("PAUSE");
    return 0;
}
