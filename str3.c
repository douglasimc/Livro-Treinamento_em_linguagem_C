/* str3.c */
/* Mostra impress�o de string com puts() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome); /* L� texto do teclado */
    puts("Sauda��es, "); /* Imprime texto no v�deo */
    puts(nome);
    puts("puts() pula linha sozinha");
    puts(&nome[4]);
    system("PAUSE");
    return 0;
}
