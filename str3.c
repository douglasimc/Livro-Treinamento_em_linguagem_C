/* str3.c */
/* Mostra impressão de string com puts() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome); /* Lê texto do teclado */
    puts("Saudações, "); /* Imprime texto no vídeo */
    puts(nome);
    puts("puts() pula linha sozinha");
    puts(&nome[4]);
    system("PAUSE");
    return 0;
}
