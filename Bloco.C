/* Bloco.C */
/* Mostra o uso de um bloco dentro de outro bloco */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=5;
    {/* Início do bloco */
        int i=150;
        printf("%d\n", i); /* Imprime 150 */
    }/* Fim do bloco */

    printf("%d\n", i); /* Imprime 5 */

    system("PAUSE");
    return 0;
}
