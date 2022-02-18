/* Mostra o conflito entre nomes de variáveis */
#include <stdio.h>
#include <stdlib.h>

void func1(int); /* Protótipo */

int main()
{
    int K = 5; /* PRIMEIRA VARIÁVEL K */
    printf("Em main()  - endereço de K = %p\n", &K);
    func1(K);
    printf("Em main()  - valor    de K = %d\n",K);
    system("PAUSE");
    return 0;
}

void func1(int K) /* SEGUNDA VARIÁVEL */
{
    K = K + 2;
    printf("Em func1() - endereço de K = %p\n",&K);
    printf("Em func1() - valor    de K = %d\n",K);
}
