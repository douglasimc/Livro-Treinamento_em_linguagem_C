/*UnsigVars.C
 *Mostra o modificador unsigned
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    unsigned j=4294967000UL;
    int i=j;

    printf("\nVari�vel unsigned = %u",j);
    printf("\nVari�vel int = %d\n",i);

    system("PAUSE");
    return 0;
}
