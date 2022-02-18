/* ifilestr.c */
/* L� linha a linha do arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    char str[81];

    /* Abre para leitura em modo texto */
    if((fptr = fopen("TesteSTR.txt","r")) == NULL) // Win32 � case-insensitive
    {
       puts("N�o foi poss�vel abrir o arquivo");
       exit(1);
    }

    while(fgets(str,80,fptr) != NULL) /* L� uma linha de texto */
        printf("%s",str);

    fclose(fptr);
    system("PAUSE");
    return 0;
}
