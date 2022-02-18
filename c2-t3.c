/* Mostar o uso de scanf() com várias entradas */
/* Calcula a média de 4 notas */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float p1,p2,p3,p4;
    double media;
    printf("\nDigite as notas das 4 provas: ");
    scanf("%f%f%f%f",&p1,&p2,&p3,&p4); //Pode-se inserir os valores separados por espaços em branco como tabulação, espaço ou nova linha
    media = (p1+p2+p3+p4)/4.0;
    printf("\nMÉDIA: %.2f\n",media);
    system("PAUSE");
    return 0;
}
