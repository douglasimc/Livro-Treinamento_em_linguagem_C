/* Medias.c - Mostra operadores aritm�ticos de atribui��o */
/* Calcula a m�dia aritm�tica de 4 notas */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota , media = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f",&nota);
    media += nota;

    //printf("\nDigite a segunda nota: "); //Diferente do desejado pela sa�da do comando no livro
    printf("Digite a segunda nota: ");
    scanf("%f",&nota);
    media += nota;

    //printf("\nDigite a terceira nota: "); //Diferente do desejado pela sa�da do comando no livro
    printf("Digite a terceira nota: ");
    scanf("%f",&nota);
    media += nota;

    //printf("\nDigite a quarta nota: "); //Diferente do desejado pela sa�da do comando no livro
    printf("Digite a quarta nota: ");
    scanf("%f",&nota);
    media += nota;

    media /= 4.0;
    //printf("\nM�DIA: %.2f\n",media); //Diferente do desejado pela sa�da do comando no livro
    printf("M�DIA: %.2f\n",media);
    system("PAUSE");
    return 0;
}
