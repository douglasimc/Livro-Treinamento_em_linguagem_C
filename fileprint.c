/* fileprint.c */
/* Imprime esse arquivo na impressora */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main()
{
    char buff[80];
    FILE *fptr, *fprn; /* Ponteiro para arquivo */

    if((fptr = fopen("FilePrint.C","r"))==NULL)
    {
            puts("Arquivo fileprint.c n�o foi encontrado.");
            exit(1);
    }

    if((fprn = fopen("PRN","w"))==NULL) /* Abre arquivo impressora */
    {
            puts("Impressora indispon�vel.");
            exit(1);
    }

    while(!feof(fptr))
    {
        fgets(buff,80,fptr); /* L� uma linha de texto */
        fputs(buff,fprn);    /* Imprime na impressora */
    }
    fclose(fptr);
    fclose(fprn);
    system("PAUSE");
    return 0;
}
