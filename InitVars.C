/*InitVars.C
 *Mostra inicialização de variáveis
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    int evento = 5;     /* Define evento inicializada com 5  */
    char corrida = 'C'; /* Define corrida inicializada com C */

    float tempo = 27.25;/*define tempo inicializada com 27.25*/

    printf("\nO tempo vitorioso na eliminatória %c", corrida);
    printf("\nda competição %d foi %f.", evento, tempo);

    system("PAUSE");
    return 0;
}
