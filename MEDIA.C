/* MEDIA.C
 * Imprime a m�dia aritm�tica de 10 notas */
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
    printf("\nM�dia = %.2f\n", soma/max);

    system("PAUSE");
    return 0;
}
