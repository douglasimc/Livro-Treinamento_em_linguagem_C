/* gravalivros.c */
/* Grava estruturas em disco */
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
            printf("Mais um livro (s/n)? ");
            resp = getche();
    }while(resp != 'n' && resp != 'N');

    fclose(fptr);
    system("PAUSE");
    return 0;
}
