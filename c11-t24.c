/* fcopy.c */
/* Copia um arquivo em outro usando baixo-n�vel */
#include <io.h> /* Para read() e write() */
#include <stdlib.h> /* Para exit() */
#include <string.h> /* Para strlen() e memchr() */
#include <fcntl.h> /* Necess�rio para flags */
#include <sys/stat.h> /* Para permiss�o */

#define TAMBUFF 1024 /* Tamanho do buffer */
char buff[TAMBUFF];

int main(int argc, char **argv)
{
    int fdOrigem, fdDest, BytesLidos;
    char *str="Formato: Fcopy ArqOrigem.xxx ArqDest.xxx\n";

    if(argc != 3)
    {
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1) ;
    }
    if((fdOrigem = open(argv[1], O_RDONLY | O_BINARY)) < 0)
    {
            str = "Arquivo n�o existe!";
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1);
    }
    if((fdDest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY |
           O_BINARY , S_IWRITE))< 0)
    {
            str = "N�o posso abrir o arquivo de grava��o.";
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1);
    }
    while((BytesLidos = read(fdOrigem,buff,TAMBUFF)) > 0)
           write(fdDest,buff,BytesLidos);
    close(fdOrigem);
    close(fdDest);
    return 0;
}
