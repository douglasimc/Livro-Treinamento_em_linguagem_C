/* Mostra o conflito entre nomes de variáveis */
#include <stdio.h>
#include <stdlib.h>
void func1(int); /* Protótipo */

int main()
{
    int K = 5; /* PRIMEIRA VARIÁVEL K */
    printf("Em main()  - endereço de K = %p\n", &K);
    printf("Em main()  - valor    de K = %d\n",K);
    if(K == 5)
    {
        int K = 2; /* SEGUNDA VARIÁVEL */
        printf("No bloco   - endereço de K = %p\n", &K);
        printf("No bloco   - valor    de K = %d\n",K);
    }
    printf("Fora do bloco - valor de K = %d\n",K);
    system("PAUSE");
    return 0;
}
