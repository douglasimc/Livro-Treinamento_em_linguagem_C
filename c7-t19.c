/* strl.c */
/* Mostra o uso de strings */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    printf("Digite o seu nome: ");
    //scanf("%s", &nome); /*N�o recomendado pelo livro*/
    //scanf("%s", &nome[0]);
    scanf("%s", &nome);
    printf("Sauda��es, %s.\n", nome);
    system("PAUSE");
    return 0;
}
