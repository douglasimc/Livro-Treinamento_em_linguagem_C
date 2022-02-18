/* bitcalc.c */
/* Calculadora bit-a-bit */
/* CORRIGIDO!!! */
#include <stdio.h>
#include <stdlib.h>
void pbin(unsigned int);
void pline(void);
int main()
{
    char op[3]; /* Aceita dois char para deslocamento */
    unsigned int x1, x2;

    while(1)
    {
        printf("Digite uma expressão (ex. 'FF00 & A23C'): ");
        scanf("%x%s%x", &x1, op, &x2);
        switch(op[0])
        {
            case '&' :  pbin(x1); printf(" & (and)\n",x1);
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
            default:    printf("Operador inválido.\n");
        }
    }
    system("PAUSE");
    return 0;
}

/* pbin() */
/* Imprime número em binário */
void pbin(unsigned int num)
{
    unsigned int mask;
    unsigned int j, bit;
    mask = 0x80000000;
    printf("%08X\t\t",num);
    for(j=0; j<32; j++)
    {
            bit = (mask & num) ? 1:0;
            printf("%d",bit);
            if(((j + 1) % 8) == 0 && !(((j + 1) % 32) == 0))
                      printf("--");
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
