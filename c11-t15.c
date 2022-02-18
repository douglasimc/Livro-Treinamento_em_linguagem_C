/* lelivros.c */
/* L� estruturas do disco */
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

    if((fptr = fopen("Livros.Dat","rb"))==NULL) exit(1);

    while(fread(&livro, sizeof(Livro),1,fptr)==1)
        PrintLivro(livro);

    fclose(fptr);
    system("PAUSE");
    return 0;
}
