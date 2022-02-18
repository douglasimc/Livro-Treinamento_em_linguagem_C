/* lincom.c */
/* Mostra argumentos da linha de comando */
#include <stdio.h>
#include <stdlib.h>
/* int main(int argc, char *argv[]) */
int main(int argc, char **argv)
{
    int i;

    printf("Número de argumentos: %d\n", argc);

    for(i=0; i<argc; i++)
        printf("Argumento número %d: %s\n", i, argv[i]);
        //printf("Argumento número %d: %s\n", i, *(argv+i)); // Equivalente

    system("PAUSE");
    return 0;
}
