/* gravalivros.c */
/* Grava estruturas em disco */
/* Arquivo gerado, não é bem interpretado por leitor de textos */
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

   int main()
   {
    Livro livro;
    char resp;
    FILE *fptr; /* Ponteiro para arquivo */

    if((fptr = fopen("Livros.Dat","wb"))==NULL) exit(1);

    do
    {
            livro = GetLivro();
            if(fwrite(&livro,sizeof(Livro),1,fptr)!=1) break;
            printf("\tMais um livro (s/n)? ");
            resp = getche();
            printf("\n"); // Por estética
    }while(resp != 'n' && resp != 'N');

    fclose(fptr);
    system("PAUSE");
    return 0;
}
