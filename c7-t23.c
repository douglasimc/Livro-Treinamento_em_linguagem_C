/* str5.c */
/* Mostra o uso de arim�tica com endere�oes */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salute[]="Sauda��es, ";
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("%s%s\n", salute, nome + 5);
    system("PAUSE");
    return 0;
}
