/* hexpbin.c */
/* Converte hexa para binário */
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

            printf("Digite um número em hexadecimal: ");
            scanf("%x",&num);
            //printf("Binário de %04x é: ", num); // Pode estar errado
            printf("Binário de %08x é: ", num); // Adaptado ao sistema atual

            for(j=0; j<t ; j++)
            {
                bit = (mask & num) ? 1 : 0;
                printf("%d",bit);
                if(((j + 1) % 8) == 0 && !(((j + 1) % 32) == 0)) /* traço entre bytes */ // Melhorado
                      printf("--");
                mask >>= 1;
            }
            printf("\n"); // Apenas por estética
    }
    system("PAUSE");
    return 0;
}

int palavra()
{
    unsigned int n = ~0; /* Todos os bits ligados */
    int i;
    for(i = 0; n ; i++) /* Enquanto n não for zero */
            n <<= 1;
    return i;
}
