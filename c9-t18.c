#include <stdio.h>
#include <stdlib.h>

/* Protótipo */
int strlen(char *);
void strcpy(char *, char *);
int strcmp(char *, char *);

int main()
{
    char oi[]="oi!";
    char ola[5]="ola!"; // Observar que sempre deve haver espaço para o caractere '\0'

    printf("%d\n",strlen(oi));
    strcpy(ola,oi);
    printf("%s\n",ola);
    printf("%d\n",strcmp(oi,ola));

    system("PAUSE");
    return 0;
}

/* Retorna o tamanho da cadeia */
int strlen(char *s)
{
    int i=0;
    while(*(s++)) i++;
    return i;
}

/* Copia a cadeia de origem na cadeia destino */
void strcpy(char *dest, char *orig)
{
    while(*(dest++) = *(orig++)); // '*' passa como var
}

/* Compara a cadeia s com a cadeia t
 * Retorna a diferença ASCII:
 *               um número positivo se s > t
 *               um número negativo se s < t
 *               zero se s == t
 */
 int strcmp(char *s, char *t)
 {
     while(*s==*t && *s)
     {
         s++;
         t++;
     }
     return *s - *t;
 }
