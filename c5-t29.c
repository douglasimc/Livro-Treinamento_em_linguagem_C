/* testarand.c */
/* Mostra o uso de vari�veis static */
/* CORRIGIDA */
#include <stdio.h>
#include <stdlib.h>

unsigned randn(void); /* Prot�tipo */
void inits(int n); /* Prot�tipo */
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

static int semente; /* Vari�vel est�tica externa apenas acess�vel por este c�digo-fonte */


/* randn() */
/* Gera n�meros aleat�rios */
unsigned randn()
{
    semente=(semente*25173 + 13894)%65536;/* F�rmula m�gica */
    return semente;
}
/* inits() */
/* Inicializa a semente */
void inits(int n)
{
    semente=n;
}
