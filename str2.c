/* str2.c */
/* Mostra a leitura de string com gets() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome); /* L� texto do teclado */
    printf("Sauda��es, %s.\n", nome);
    system("PAUSE");
    return 0;
}
