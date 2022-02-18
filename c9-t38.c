/* lincom.c */
/* Mostra argumentos da linha de comando */
#include <stdio.h>
#include <stdlib.h>
/* int main(int argc, char *argv[]) */
int main(int argc, char **argv)
{
    int i;

    printf("N�mero de argumentos: %d\n", argc);

    for(i=0; i<argc; i++)
        printf("Argumento n�mero %d: %s\n", i, argv[i]);
        //printf("Argumento n�mero %d: %s\n", i, *(argv+i)); // Equivalente

    system("PAUSE");
    return 0;
}
