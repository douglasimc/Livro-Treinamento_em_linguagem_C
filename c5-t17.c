/* minuts.c */
/* Calcula a diferença entre dois tempos */
/* Solicita hora:minutos */
#include <stdio.h>
#include <stdlib.h>

int minutos(int, int); /* Protótipo */

int main()
{
    int mins1, mins2;
    int hora, min;
    printf("Digite a primeira hora (hora:min): ");
    scanf("%d:%d",&hora,&min); /* Novo uso do scanf hh:mm */
    mins1=minutos(hora, min);
    printf("Digite a segunda hora (hora:min): ");
    scanf("%d:%d",&hora,&min);
    mins2=minutos(hora, min);
    printf("A diferença é %d minutos.",mins2-mins1);
    system("PAUSE");
    return 0;
}
/* minutos() */
/* Retorna hora em minutos */
int minutos(int h, int m)
{
    return(h*60 + m);
}
