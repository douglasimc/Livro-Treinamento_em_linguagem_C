#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Aluno             /*In�cio da defini��o da estrutura */
    {
        int nmat;            /* N�mero da matr�cula */
        float nota[3];       /* Notas */
        float media;         /* M�dia */
    } Jose;/* Cria a vari�vel Jose do tipo Aluno */

    Jose.nmat    = 456;
    Jose.nota[0] = 7.5;
    Jose.nota[1] = 5.2;
    Jose.nota[2] = 8.4;
    Jose.media   = (Jose.nota[0] + Jose.nota[1] +
                    Jose.nota[2])/3.0;

    printf("Matr�cula: %d\n", Jose.nmat);
    printf("M�dia    : %.2f\n", Jose.media);

    system("PAUSE");
    return 0;
}
