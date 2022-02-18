/* pdmedia.c */
/* Aloca��o din�mica da matriz com calloc() */
#include <stdio.h>
#include <stdlib.h>

float media(float *, int);/*Prot�tipo */

int main()
{
    float * notas , m;
    int tamanho, i;

    puts("Qual � o n�mero de notas? ");
    scanf("%d", &tamanho);

    notas = (float *)calloc(tamanho,sizeof(float));

    for(i=0; i < tamanho; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", notas+i);
    }

    m = media(notas, tamanho);
    printf("M�dia das notas: %.2f\n", m);

    free(notas);

    system("PAUSE");
    return 0;
}

/*Calcula a m�dia dos valores da matriz */
float media(float *lista, int tamanho)
{
    int i;
    float m=0.0;
    for(i=0; i < tamanho ; i++) m += *(lista++);
    return m/tamanho ;
}
