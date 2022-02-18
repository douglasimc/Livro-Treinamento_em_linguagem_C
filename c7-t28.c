/* strcmp.c */
/* Testa a função strcmp() */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("%d\n", strcmp("A","A"));
    printf("%d\n", strcmp("A","a"));
    printf("%d\n", strcmp("a","A"));
    printf("%d\n", strcmp("A","B"));
    printf("%d\n", strcmp("A","b"));
    printf("%d\n", strcmp("B","A"));
    printf("%d\n", strcmp("C","A"));
    printf("%d\n", strcmp("Z","A"));
    printf("%d\n", strcmp("-","A"));
    printf("%d\n", strcmp("casas","casa"));
    printf("%d\n", strcmp("casas","CASAS"));

    system("PAUSE");
    return 0;
}
