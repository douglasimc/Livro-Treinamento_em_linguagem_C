/* unionstruct.c */
/* Mostra união de estruturas */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct doisnit
    {
        int n1;
        int n2;
    };

    union intflo
    {
        struct doisnit x;
        float   f;
    }unex;

    printf("sizeof(union intflo) = %d\n", sizeof(union intflo));
    unex.x.n1 = 734;
    unex.x.n2 = 333;

    printf("unex.x.n1     = %d\n" , unex.x.n1);
    printf("unex.x.n2     = %d\n" , unex.x.n2);

    unex.f = 345.22;

    printf("unex.f        = %.2f\n", unex.f);

    system("PAUSE");
    return 0;
}
