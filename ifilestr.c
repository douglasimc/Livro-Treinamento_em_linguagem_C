/* ifilestr.c */
/* Lê linha a linha do arquivo */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(void)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    char str[81];

    /* Abre para leitura em modo texto */
    if((fptr = fopen("TesteSTR.txt","r")) == NULL)
    {
       puts("Não foi possível abrir o arquivo");
       exit(1);
    }

    while(fgets(str,80,fptr) != NULL) /* Lê uma linha de texto */
        printf("%s",str);

    fclose(fptr);
    system("PAUSE");
    return 0;
}
