/* Convers�o de tipo autom�tica */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int VarInt=2000000000;
    int Dez=10;
    VarInt = (VarInt * Dez)/Dez; //N�mero grande demais
    printf("\nVarInt = %d\n",VarInt); //Exibe valor incorreto
    system("PAUSE");
    return 0;
}
