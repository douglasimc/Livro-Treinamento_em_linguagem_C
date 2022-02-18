/* ptrgets.c */
/* Mostra o uso de ponteiro como argumento de fun��o */
#include <stdio.h>
#include <stdlib.h>

void func(char * (*)(char *));

int main()
{
    char * (*p)(char *);
    p = gets;
    func(p);

    system("PAUSE");
    return 0;
}

void func(char * (*p)(char *))
{
    char nome[80];

    printf("Digite seu nome: ");

    (*p)(nome);     /* Chama a fun��o gets()*/

    printf("Seu nome �: %s\n", nome);
}
