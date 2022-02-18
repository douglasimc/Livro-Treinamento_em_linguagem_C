/* gravalivros.c */
/* Grava estruturas em disco */
/* Arquivo gerado, n�o � bem interpretado por leitor de textos */
/* Realizada melhorias na est�tica */
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
    printf("Digite o t�tulo: ");
    gets(livro.Titulo);
    printf("Digite o autor: ");
    gets(livro.Autor);
    printf("Digite o n�mero do registro: ");
    scanf("%hd", &livro.NumReg);
    printf("Digite o pre�o: ");
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
            printf("\n"); // Por est�tica
    }while(resp != 'n' && resp != 'N');

    fclose(fptr);
    system("PAUSE");
    return 0;
}
