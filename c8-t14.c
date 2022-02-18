#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct 
    {
 		int pecas;
        float preco;
    } Venda;
	
	Venda	A = {20 , 110.0}, B = {3 , 16.5}, Total;
	
	//Total = A + B;/* ERRADO */
	Total.pecas = A.pecas + B.pecas;
	Total.preco = A.preco + B.preco;

    printf("Total de peças: %d\n", Total.pecas);
    printf("Total de preço: %.2f\n", Total.preco);

    system("PAUSE");
    return 0;
}
