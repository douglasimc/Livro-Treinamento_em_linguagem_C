/* numadiv.c */
/* Adivinha o n�mero que o usu�rio pensou */
/* Mostra o uso de break */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /* Para o getche() */

int main()
{
    float incr=50.0, adiv=50.0;

    printf("Pense em um n�mero entre 1 e 99, e responda\n");
    printf(" =, > ou < para igual, maior ou menor\n");

    while (incr > 1)
    {
        char ch;
        incr /=2;
        printf("\n=, > ou < a %d? ",(int)adiv);

        if((ch=getche())== '=') break;

        else if (ch == '>') adiv += incr;
        else adiv -= incr;
    }
    printf("\nO n�mero � %d",(int)adiv);
    printf("\nCOMO SOU ESPERTO!!!!\n");

    system("PAUSE");
    return 0;
}
