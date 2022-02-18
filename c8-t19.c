#include <stdio.h>  /* Para gets(), printf(), scanf() */
#include <stdlib.h> /* Para system(), atoi(), atof(), exit () */

typedef struct
{
    unsigned short CodAscii: 8;     /* Bits 0 a 7 */
    unsigned short CorFrente: 3;    /* Bits 8 a 10 */
    unsigned short Intenso: 1;      /* Bits 11 */
    unsigned short CorFundo: 3;     /* Bit 12 a 14 */
    unsigned short Piscante: 1;     /* Bit 15 */

} Intel16Bits;

int main()
{
    Intel16Bits A;

    A.CodAscii = 'A';
    A.CorFrente = 15;    /* Branco para a cor de frente */ // Erro proposital para ver o nibble 1`111
    A.Intenso = 1;      /* Intensifica a cor de frente */
    A.CorFundo = 0;     /* Preto para a cor de fundo */
    A.Piscante = 1;     /* Escolhe atributo piscante */

    printf("%X\n",A.CorFrente);

    system("PAUSE");
    return 0;
}
