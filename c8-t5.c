#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
    {
        int nmat;
        float nota[3];
        float media;
    } Aluno;

Aluno Jose;     /* Declara uma vari�vel do tipo Aluno */

int main()
{

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
