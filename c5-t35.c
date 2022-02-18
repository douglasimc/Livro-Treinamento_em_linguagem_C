/* Mostra o conflito entre nomes de variáveis */
#include <stdio.h>
#include <stdlib.h>

void func(void); /* Protótipo */

int K = 5; /* PRIMEIRA VARIÁVEL K */

int main()
{
    int K = 10; /* SEGUNDA VARIÁVEL */
    printf("Em main()  - endereço de K = %p\n",&K);
    printf("Em main()  - valor    de K = %d\n",K);
    func();

    system("PAUSE");
    return 0;
}

void func()
{
    printf("Em func()  - endereço de K = %p\n", &K);
    printf("Em func()  - valor    de K = %d\n",K);
}
