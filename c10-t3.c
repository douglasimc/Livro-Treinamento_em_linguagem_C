/* hexpbin.c */
/* Converte hexa para bin�rio */
#include <stdio.h>
#include <stdlib.h>

int palavra();

int main()
{
    int t, j, num, bit;
    unsigned int mask;
    while(1)
    {
            t = palavra();

            /* 1 no bit mais significativo e 0 (zero) nos outros */
            mask = pow(2, t-1);

            printf("Digite um n�mero em hexadecimal: ");
            scanf("%x",&num);
            //printf("Bin�rio de %04x �: ", num); // Pode estar errado
            printf("Bin�rio de %08x �: ", num); // Adaptado ao sistema atual

            for(j=0; j<t ; j++)
            {
                bit = (mask & num) ? 1 : 0;
                printf("%d",bit);
                if(((j + 1) % 8) == 0 && !(((j + 1) % 32) == 0)) /* tra�o entre bytes */ // Melhorado
                      printf("--");
                mask >>= 1;
            }
            printf("\n"); // Apenas por est�tica
    }
    system("PAUSE");
    return 0;
}

int palavra()
{
    unsigned int n = ~0; /* Todos os bits ligados */
    int i;
    for(i = 0; n ; i++) /* Enquanto n n�o for zero */
            n <<= 1;
    return i;
}
