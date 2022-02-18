/* testarand.c */
/* Mostra o uso de variáveis static */
/* CORRIGIDA */
#include <stdio.h>
#include <stdlib.h>

static int semente; /* Variável estática externa apenas acessível por este código-fonte */

/* randn() */
/* Gera números aleatórios */
static unsigned randn() /* Acessível somente a este código-fonte */
{
    semente=(semente*25173 + 13894)%65536;/* Fórmula mágica */
    return semente;
}

/* inits() */
/* Inicializa a semente */
void inits(int n)
{
    semente=n;
}

int main()
{
    int i;
    int s;
    printf("Digite a sua semente: ");
    scanf("%d", &s);

    inits(s); /* Inicializa a semente */

    for(i=0;i < 5 ; i++)
        printf("%d\n", randn());
    system("PAUSE");
    return 0;
}
