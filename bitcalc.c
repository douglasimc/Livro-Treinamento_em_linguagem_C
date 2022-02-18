/* bitcalc.c */
/* Calculadora bit-a-bit */
#include <stdio.h>
#include <stdlib.h>
void pbin(unsigned short);
void pline(void);
int main()
{
    char op[3]; /* Aceita dois char para deslocamento */
    unsigned short x1, x2;

    while(1)
    {
        printf("Digite uma express�o (ex. 'FF00 & A23C'): ");
        scanf("%x %s %x", &x1, op, &x2);
        switch(op[0])
        {
            case '&' :  pbin(x1); printf(" & (and)\n");
                        pbin(x2); pline();
                        pbin(x1 & x2); break;
            case '|' :  pbin(x1); printf(" | (or)\n");
                        pbin(x2); pline();
                        pbin(x1 | x2); break;
            case '^' :  pbin(x1); printf(" ^ (xor)\n");
                        pbin(x2); pline();
                        pbin(x1 ^ x2); break;
            case '>' :  pbin(x1); printf(" >> %d\n", x2);
                        pline(); pbin(x1 >> x2); break;
            case '<' :  pbin(x1); printf(" << %d\n", x2);
                        pline(); pbin(x1 >> x2); break;
            case '~' :  pbin(x1); printf(" ~ (complemento)\n");
                        pline(); pbin(~x1); break;
            default:    printf("Operador inv�lido.\n");
        }
    }
    system("PAUSE");
    return 0;
}

/* pbin() */
/* Imprime n�mero em bin�rio */
void pbin(unsigned short num)
{
    unsigned short mask;
    short j, bit;
    mask = 0x8000;
    printf("%04X\t\t",num);
    for(j=0; j<16; j++)
    {
            bit = (mask & num) ? 1:0;
            printf("%d",bit);
            if(j == 7) printf("--");
            mask >>= 1;
    }
    printf("\n");
}

/* Pline() */
void pline()
{
    printf("-----------------");
    printf("-----------------\n");
}
