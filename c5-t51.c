#include <stdio.h>
#include <stdlib.h>

#define GRANDE      3
#define ENORME      8
#define SOMA(x,y)   (x)+(y)

int main()
{
    printf("GRANDE: %d\n", GRANDE);
#undef GRANDE /* Cancela a defini��o de GRANDE */
     //printf("GRANDE: %d\n", GRANDE);
     printf("ENORME: %d\n", ENORME);
#define ENORME 10 /* ENORME agora vale 10 */
     printf("ENORME: %d\n", ENORME);
#undef ENORME /* ENORME volta a valer 8 */ //Na pr�tica ele cancela a defini��o
//     printf("ENORME: %d\n", ENORME);
#undef ENORME /* Cancela a defini��o de ENORME */
//     printf("ENORME: %d\n", ENORME);
     printf("SOMA: %d\n", SOMA(3,4));
//#undef SOMA(x,y) /* N�o funciona com os '(*)' */
#undef SOMA /* Cancela a macro SOMA */
//    printf("SOMA: %d\n", SOMA(3,4));

    system("PAUSE");
    return 0;
}
