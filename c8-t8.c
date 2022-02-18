#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Aluno             /*Início da definição da estrutura */
    {
        int nmat;            /* Número da matrícula */
        float nota[3];       /* Notas */
        float media;         /* Média */
    } Jose;/* Cria a variável Jose do tipo Aluno */

    Jose.nmat    = 456;
    Jose.nota[0] = 7.5;
    Jose.nota[1] = 5.2;
    Jose.nota[2] = 8.4;
    Jose.media   = (Jose.nota[0] + Jose.nota[1] +
                    Jose.nota[2])/3.0;

    printf("Matrícula: %d\n", Jose.nmat);
    printf("Média    : %.2f\n", Jose.media);

    system("PAUSE");
    return 0;
}
