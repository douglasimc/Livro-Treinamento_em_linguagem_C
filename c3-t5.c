/* Mostra o uso de uma vari�vel do tipo char para controle do la�o */
//* Imprime as letras min�sculas e seus correspondentes valores
/* Imprime as letras min�sculas e seus correspondentes valores
 * em decimal na tabela ASCII */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    for (ch='a'; ch <= 'z'; ch++)
        printf("\nO valor ASCII de %c � %d" , ch , ch);

    printf("\n");
    system("PAUSE");
    return 0;
}
