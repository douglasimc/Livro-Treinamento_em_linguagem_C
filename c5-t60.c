#if     9 > 4
#error  "Erro do pré-processador"
#endif // 9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("VERSAO_DEMO = %d\n",VERSAO_DEMO); // Código não compila // VERSAO_DEMO está vazio, porém está definido
    printf("main()");

    system("PAUSE");
    return 0;
}
