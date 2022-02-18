/* Adivinha.C */
/* Testa sua capacidade de adivinhar uma letra */
#include <stdio.h>
#include <stdlib.h> /* Para system() e rand() */
#include <conio.h> /* Para getch() */
int main()
{
    char resp; /* Resposta do usu�rio */
    char secreto;
    int tentativas;
    do /*In�cio do la�o */
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n\nDigite uma letra entre 'a' e 'z':\n");

        while((resp=getch())!= secreto)
        {
            printf("%c � incorreto. Tente novamente\n",resp);
            tentativas++;
        }
        printf("%c � CORRETO!!\n",resp);
        printf("Voc� acertou em %d tentativas\n",tentativas);
        printf("\nQuer jogar novamente? (s/n): ");
    }while(getche()=='s');
    printf("\nAt� logo e boa sorte!\n");
    system("PAUSE");
    return 0;
}
