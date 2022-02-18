#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    printf("A letra %c", 'J' );
    //printf("pronuncia-se %s%c%c", "Jota", '.','\n' ); /* Ator errou ao não incluir um ' ' */
    printf("%cpronuncia-se %s%c%c",' ', "Jota", '.','\n' ); /* Exibição melhorada */

    system("PAUSE");
    return 0;
}
