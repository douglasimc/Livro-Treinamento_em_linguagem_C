/* MEDIA.C
 * Imprime a média aritmética de 10 notas */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float soma = 0.0;
    const int max = 10;
    int i;

    for(i=0; i < max ; i++)
    {
        float nota;
        printf("\nDigite a nota %d : ", i+1);
        scanf("%f",&nota);
        soma += nota;
    }
    printf("\nMédia = %.2f\n", soma/max);

    system("PAUSE");
    return 0;
}
