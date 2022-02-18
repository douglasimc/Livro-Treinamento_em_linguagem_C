#define VERSAO_DEMO
#if   defined(VERSAO_DEMO)
         #define    NUM_REC     20
#else
         #define    NUM_REC     100
#endif

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("VERSAO_DEMO = %d\n",VERSAO_DEMO); // Código não compila // VERSAO_DEMO está vazio, porém está definido
    printf("NUM_REC = %d\n",NUM_REC);

    system("PAUSE");
    return 0;
}
