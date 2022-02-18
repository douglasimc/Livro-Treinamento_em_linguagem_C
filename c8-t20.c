#include <stdio.h>  /* Para gets(), printf(), scanf() */
#include <stdlib.h> /* Para system(), atoi(), atof(), exit () */

typedef void FuncType(float, int);

FuncType MinhaFunc; /* Protótipo */

int main()
{
    float x;
    int y;
    printf("Digite um número real seguido por um número inteiro para somá-los: ");
    scanf("%f%d",&x,&y);
    MinhaFunc(x,y);

    system("PAUSE");
    return 0;
}
void MinhaFunc(float z,int w)
{
    printf("Soma => %.2f\n",z+w);
}
