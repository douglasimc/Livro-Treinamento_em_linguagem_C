/* Mostra o uso de uma variável do tipo char para controle do laço */
//* Imprime as letras minúsculas e seus correspondentes valores
/* Imprime as letras minúsculas e seus correspondentes valores
 * em decimal na tabela ASCII */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    for (ch='a'; ch <= 'z'; ch++)
        printf("\nO valor ASCII de %c é %d" , ch , ch);

    printf("\n");
    system("PAUSE");
    return 0;
}
