/* caracoroa.c */
/* Jogo de cara ou coroa */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, perda=0, ganho=0, resp,i;
    printf("Quantas vezes você quer jogar?");
    scanf("%d",&n);

    for(i=0; i < n; i++)
    {
        printf("Escolha: 0=Cara e 1=Coroa: ");
        scanf("%d",&resp);
        while(resp != 0 && resp != 1)
        {
            printf("ERRO: entre 0 cara e 1 coroa");
            scanf("%d",&resp);
        }
        if((rand()%2)==resp)
        {
            ganho++;
            if(resp==0)
                printf("Cara, você ganhou.\n");
            else
                printf("Coroa, você ganhou.\n");
        }
        else
        {
            perda++;
            if(resp==1)
                printf("Cara, você perdeu.\n");
            else
                printf("Coroa, você perdeu.\n");
        }
    }

    printf("\n\nRelatório Final:");
    printf("\nNo. de jogos que você ganhou:   %d",ganho);
    printf("\nNo. de jogos que você perdeu:   %d\n", perda);
    system("PAUSE");
    return 0;
}
