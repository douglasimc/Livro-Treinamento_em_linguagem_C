/* Mostra o conflito entre nomes de vari�veis */
#include <stdio.h>
#include <stdlib.h>

void func(void); /* Prot�tipo */

int K = 5; /* PRIMEIRA VARI�VEL K */

int main()
{
    int K = 10; /* SEGUNDA VARI�VEL */
    printf("Em main()  - endere�o de K = %p\n",&K);
    printf("Em main()  - valor    de K = %d\n",K);
    func();

    system("PAUSE");
    return 0;
}

void func()
{
    printf("Em func()  - endere�o de K = %p\n", &K);
    printf("Em func()  - valor    de K = %d\n",K);
}
