#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    printf("A letra %c", 'J' );
    //printf("pronuncia-se %s%c%c", "Jota", '.','\n' ); /* Ator errou ao n�o incluir um ' ' */
    printf("%cpronuncia-se %s%c%c",' ', "Jota", '.','\n' ); /* Exibi��o melhorada */

    system("PAUSE");
    return 0;
}
