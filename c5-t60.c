#if     9 > 4
#error  "Erro do pr�-processador"
#endif // 9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("VERSAO_DEMO = %d\n",VERSAO_DEMO); // C�digo n�o compila // VERSAO_DEMO est� vazio, por�m est� definido
    printf("main()");

    system("PAUSE");
    return 0;
}
