/* ofilestr.c */
/* Grava strings no arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    /* Cria para gravar em modo texto */
    fptr = fopen("Testestr.txt","w");

    fputs("Um grande ant�doto contra o ego�smo\n",fptr);
    fputs("� a generosidade... D�, mesmo que\n", fptr);
    fputs("isso requeira de voc� um esfor�o\n", fptr);
    fputs("consciente. Pelo fato de partilhar\n",fptr);
    fputs("tudo o que possui, seu ego�smo se\n",fptr);
    fputs("abrandar�.\n",fptr);
    fclose(fptr);
    system("TYPE Testestr.txt");
    system("PAUSE");
    return 0;
}
