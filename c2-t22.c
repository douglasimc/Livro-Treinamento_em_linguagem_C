#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    /* 0 = Falso e !0 = Verdadeiro */
    printf("%d\n",!5);
    printf("%d\n",!0);
    printf("%d\n",!'j');
    printf("%d\n",1||2);
    printf("%d\n",0&&0);
    printf("%d\n",1&&3);
    system("PAUSE");
    return 0;
}
