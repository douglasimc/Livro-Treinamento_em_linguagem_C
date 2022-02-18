#include <stdio.h> /* Define FILE */
#include <stdlib.h>

int main()
{
    char ch,ch1;
    fprintf(stdout,"digite um caractere ");
    fscanf(stdin,"%c",&ch);
    rewind(stdin);
    fscanf(stdin,"%c", &ch1);
    fprintf(stdout,"%c%c\n",ch,ch1);

    system("PAUSE");
    return 0;
}
