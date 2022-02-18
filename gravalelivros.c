/* gravalelivros.c */
/* Grava e l� estruturas em disco */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>
#include <conio.h> /* Para getch() */

typedef struct Livro
{
    char Titulo[50];
    char Autor[50];
    short NumReg;
    double Preco;
} Livro;

Livro GetLivro()
{
    Livro livro;
    printf("\n\tDigite o t�tulo: ");
    gets(livro.Titulo);
    printf("\tDigite o autor: ");
    gets(livro.Autor);
    printf("\tDigite o n�mero do registro: ");
    scanf("%hd", &livro.NumReg);
    printf("\tDigite o pre�o: ");
    scanf("%lf", &livro.Preco);
    rewind(stdin);
    return livro;
}

void PrintLivro(Livro livro)
{
    printf("\n\tT�tulo: %s\n",livro.Titulo);
    printf("\tAutor: %s\n",livro.Autor);
    printf("\tNo.Reg: %hd\n",livro.NumReg);
    printf("\tPre�o: %.2lf\n",livro.Preco);
}

int main()
{
    Livro livro;
    char resp;
    FILE *fptr; /* Ponteiro para arquivo */

    /* Abre arquivo p/ leitura e grava��o. Adiciona dados no final */
    if((fptr = fopen("livros.dat","ab+"))==NULL) exit(1);

    do
    {
            livro = GetLivro();
            if(fwrite(&livro,sizeof(Livro),1,fptr)!=1) break;
            printf("Mais um livro (s/n)? ");
            resp = getche();
    }while(resp != 'n' && resp != 'N');

    fflush(fptr); /* Esvazia o conte�do do buffer de sa�da */
    fseek(fptr,0,0); /* Coloca o ponteiro no in�cio do arquivo */

    puts("\n\nLISTA DE LIVROS DO ARQUIVO");
    puts("===================================");

    while(fread(&livro, sizeof(Livro),1,fptr)==1) PrintLivro(livro);
    fclose(fptr);
    system("PAUSE");
    return 0;
}
