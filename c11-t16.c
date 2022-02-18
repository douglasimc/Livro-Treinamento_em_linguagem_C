/* gravalelivros.c */
/* Grava e lê estruturas em disco */
/* Realizada melhorias na estética */
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
    printf("Digite o título: ");
    gets(livro.Titulo);
    printf("Digite o autor: ");
    gets(livro.Autor);
    printf("Digite o número do registro: ");
    scanf("%hd", &livro.NumReg);
    printf("Digite o preço: ");
    scanf("%lf", &livro.Preco);
    rewind(stdin);
    return livro;
}

void PrintLivro(Livro livro)
{
    printf("\n\tTítulo: %s\n",livro.Titulo);
    printf("\tAutor: %s\n",livro.Autor);
    printf("\tNo.Reg: %hd\n",livro.NumReg);
    printf("\tPreço: %.2lf\n",livro.Preco);
}

int main()
{
    Livro livro;
    char resp;
    FILE *fptr; /* Ponteiro para arquivo */

    /* Abre arquivo p/ leitura e gravação. Adiciona dados no final */
    if((fptr = fopen("livros.dat","ab+"))==NULL) exit(1);

    do
    {
            livro = GetLivro();
            if(fwrite(&livro,sizeof(Livro),1,fptr)!=1) break;
            printf("\tMais um livro (s/n)? ");
            resp = getche();
            printf("\n"); // Por estética
    }while(resp != 'n' && resp != 'N');

    fflush(fptr); /* Esvazia o conteúdo do buffer de saída */
    fseek(fptr,0,0); /* Coloca o ponteiro no início do arquivo */

    puts("\nLISTA DE LIVROS DO ARQUIVO");
    puts("===================================");

    while(fread(&livro, sizeof(Livro),1,fptr)==1) PrintLivro(livro);
    fclose(fptr);
    system("PAUSE");
    return 0;
}
