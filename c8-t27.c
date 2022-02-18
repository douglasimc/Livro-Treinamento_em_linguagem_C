/* union1.c */
/* Mostra o uso de uniões */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Para strcpy() */

/* Inicializacao permitida */ // Inicialização permitida
static union
{
    float salario;
    int idade;
} uInt = {123.456};

int main()
{
    printf("%f\n",uInt.salario);
    system("PAUSE");
    return 0;
}
