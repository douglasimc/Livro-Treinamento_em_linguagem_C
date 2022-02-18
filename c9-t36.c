/* lista.c */
/* Mostra a implementa��o de uma lista ligada */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para o getch() */

typedef struct Livro
{
    char Titulo[30];
    char Autor[30];
    int NumReg;
    double Preco;
    struct Livro *Proximo;
}Livro;

Livro *primeiro, *atual, *NovoLivro;

void GetLivro()
{
    char temp[80];
    NovoLivro = (Livro *)malloc(sizeof(Livro));
    if(primeiro == (Livro *)NULL)
        primeiro = atual = NovoLivro;
    else
    {
        atual = primeiro;
        while(atual->Proximo != (Livro *)NULL)
            atual = atual->Proximo; /* Procura novo item */
        atual->Proximo = NovoLivro;
        atual = NovoLivro;
    }
    printf("Digite titulo: ");
    gets(atual->Titulo);
    printf("Digite autor: ");
    gets(atual->Autor);
    printf("Digite o n�mero do registro: ");
    gets(temp);
    atual->NumReg = atoi(temp);
    printf("Digite o pre�o: ");
    gets(temp);
    atual->Preco = atof(temp);
    atual->Proximo=(Livro *)NULL;
}

void PrintLivro()
{
    if(primeiro == (Livro *)NULL)
    {
            puts("Lista vazia");
            return;
    }

    atual = primeiro;

    do
    {
            printf("T�tulo: %s\n", atual->Titulo);
            printf("Autor : %s\n", atual->Autor);
            printf("No.Reg: %d\n", atual->NumReg);
            printf("Pre�o : %.2f\n\n", atual->Preco);
            atual = atual->Proximo;
    }while(atual != NULL);
}

int main()
{
    char ch;
    primeiro = (Livro *) NULL; /* Sem dados ainda */
    //primeiro = (Livro *) 0; /* Sem dados ainda */ // Equivalente

    PrintLivro();
    puts("Insira um livro");
    puts("---------------");

    do
    {
            GetLivro();
            puts("\nInserir outro livro (s/n)? ");
            ch = getch();
            puts("---------------");
    } while((ch != 'n') && (ch != 'N'));

    puts("\nLISTA DOS LIVROS CADASTRADOS");
    puts("============================");

    PrintLivro();

    system("PAUSE");
    return 0;
}
