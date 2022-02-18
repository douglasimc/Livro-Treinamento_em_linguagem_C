/* ptrfunc.c */
/* Mostra o uso de ponteiro para função */
#include <stdio.h>
#include <stdlib.h>

void doisbeep(void); /* Protótipo */

int main()
{
    //void *pf(void); // Assim é como se estivemos criando um protótipo que retorna um ponteiro void
    void (*pf)(void);/* Ponteiro para função void que recebe void */

    //pf = doisbeep(); // Assim teriamos o retorno da função e não o endereço dela
    pf = doisbeep; /* Nome da função sem os parênteses */

    (*pf)();/* Chama a função */

    system("PAUSE");
    return 0;
}

/* doisbeep() */
/* Toca o alto-falante duas vezes */
void doisbeep(void)
{
    unsigned i;
    printf("\a");
    for(i=0; i < 800000000 ; i++); /* Dar um tempo */ // Para minha máquina tive que aumentar para ficar perceptível :p */
    printf("\a");
}
