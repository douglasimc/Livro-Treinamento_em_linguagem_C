/*InitVars.C
 *Mostra inicializa��o de vari�veis
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    int evento = 5;     /* Define evento inicializada com 5  */
    char corrida = 'C'; /* Define corrida inicializada com C */

    float tempo = 27.25;/*define tempo inicializada com 27.25*/

    printf("\nO tempo vitorioso na eliminat�ria %c", corrida);
    //printf("\nda competi��o %d foi %f.", evento, tempo); /* Exibi��o diferente da sa�da do livro */
    printf("\nda competi��o %d foi %.2f.", evento, tempo); /* Corre��o para sa�da igual a desejada no livro */

    system("PAUSE");
    return 0;
}
