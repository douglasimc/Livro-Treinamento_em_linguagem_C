/* Mostar o uso de scanf() com v�rias entradas */
/* Calcula a m�dia de 4 notas */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float p1,p2,p3,p4;
    double media;
    printf("\nDigite as notas das 4 provas: ");
    scanf("%f%f%f%f",&p1,&p2,&p3,&p4); //Pode-se inserir os valores separados por espa�os em branco como tabula��o, espa�o ou nova linha
    media = (p1+p2+p3+p4)/4.0;
    printf("\nM�DIA: %.2f\n",media);
    system("PAUSE");
    return 0;
}
