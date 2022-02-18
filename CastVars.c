/* CastVars.c */
/* Mostra o operador de conversão de tipo */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int VarInt=2000000000;
    int Dez=10;
    VarInt = ((double)VarInt * Dez)/Dez; /* Converte para double */
    printf("\nVarInt = %d\n",VarInt); /* Resposta correta */
    system("PAUSE");
    return 0;
}
