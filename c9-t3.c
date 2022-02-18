/* ponteiros.c */
/* Mostra o uso de ponteiros variáveis */
/* Melhorado */
#include <stdio.h>
#include <stdlib.h>

void reajusta20(float *, float *); /* Protótipo */

int main()
{
    float val_preco, val_reaj;
    do
    {
            printf("\nInsira o preço atual: ");
            scanf("%f", &val_preco);
            if(val_preco!=0.0)
            {
                reajusta20(&val_preco, &val_reaj); /* Enviando endereços */
                //printf("\nO preço novo é %.2f\n", val_preco);
                printf("\nO preço novo é %.2f\n", *&val_preco); // Equivalente
                //printf("O aumento foi de %.2f\n", val_reaj);
                printf("O aumento foi de %.2f\n", *&val_reaj); // Equivalente
            } else break;
    } while(1);

    system("PAUSE");
    return 0;
}

/* reajusta20() */
/* Reajusta o preço em 20% */
void reajusta20(float *preco, float *reajuste)
{
    *reajuste = *preco * 0.2;
    *preco *= 1.2;
}
