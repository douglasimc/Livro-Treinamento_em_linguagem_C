/* str3.c */
/* Mostra impressão de string com puts() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome); /* Lê texto do teclado */

    /* Imprime texto no vídeo */
    puts("Saudações, ");
    printf("%s\n",nome); // Equivalente
    puts(nome);          // Equivalente
    puts("puts() pula linha sozinha");
    puts(&nome[4]);

    system("PAUSE");
    return 0;
}
