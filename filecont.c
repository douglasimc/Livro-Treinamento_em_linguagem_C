/* filecont.c */
/* Conta caracteres do arquivo em modo texto */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fptr;  /* Ponteiro para arquivo */
    short int ch;
    int cont=0;

    if(argc != 2)
    {
            puts("Forma de uso: C:\\>FileCont nomearq");
            exit(1);
    }

    if((fptr = fopen(argv[1],"r")) == NULL)
    {
            puts("Não possível abrir o arquivo");
            exit(1);
    }

    while((ch=fgetc(fptr)) != EOF ) /* Lê um caractere do arquivo */
        cont++;              /* Incrementa contador de caracteres */
    printf("O tamanho do arquivo é %d bytes.\n", cont);
    fclose(fptr);

    return 0;
}
