/* ofilestr.c */
/* Grava strings no arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    /* Cria para gravar em modo texto */
    fptr = fopen("Testestr.txt","w");

    fputs("Um grande antídoto contra o egoísmo\n",fptr);
    fputs("é a generosidade... Dê, mesmo que\n", fptr);
    fputs("isso requeira de você um esforço\n", fptr);
    fputs("consciente. Pelo fato de partilhar\n",fptr);
    fputs("tudo o que possui, seu egoísmo se\n",fptr);
    fputs("abrandará.\n",fptr);
    fclose(fptr);
    system("TYPE Testestr.txt");
    system("PAUSE");
    return 0;
}
