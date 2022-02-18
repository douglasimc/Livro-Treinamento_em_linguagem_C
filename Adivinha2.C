/* Adivinha.C */
/* Testa sua capacidade de adivinhar uma letra */
#include <stdio.h>
#include <stdlib.h> /* Para system() e rand() */
#include <conio.h> /* Para getch() */
int main()
{
    char resp; /* Resposta do usuário */
    char secreto;
    int tentativas;
    do /*Início do laço */
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n\nDigite uma letra entre 'a' e 'z':\n");

        while((resp=getch())!= secreto)
        {
            printf("%c é incorreto. Tente novamente\n",resp);
            tentativas++;
        }
        printf("%c é CORRETO!!\n",resp);
        printf("Você acertou em %d tentativas\n",tentativas);
        printf("\nQuer jogar novamente? (s/n): ");
    }while(getche()=='s');
    printf("\nAté logo e boa sorte!\n");
    system("PAUSE");
    return 0;
}
