/* leimppadrao.c */
/* L� de stdin e imprime em stdout usando baixo-n�vel */
#include <io.h> /* Para read() e write() */
#include <stdlib.h> /* Para system() */
#include <string.h> /* Para strlen() */

int main()
{
    char *str="Digite o nome seu nome: ";
    char nome[80];
    int BytesLidos;

    write(1,str,strlen(str)); /* Imprime em stdout */

    BytesLidos=read(0,nome,80); /* L� de stdin */

    nome[BytesLidos+1]='\0';

    str="Seu nome � ";
    write(1,str,strlen(str)); /* Imprime em stdout */
    write(1,nome,strlen(nome));
    system("PAUSE");
    return 0;
}
