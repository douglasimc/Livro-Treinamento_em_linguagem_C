/* str4.c */
/* Mostra o uso de strings inicializadas */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salute[]={'S','a','u','d','a','�','�','e','s',',',' ','\0'};
    //char salute[]="Sauda��es, ";
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("%s%s\n", salute, nome);
    system("PAUSE");
    return 0;
}
