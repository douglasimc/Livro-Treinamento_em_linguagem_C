/* learq.c */
/* L� e imprime arquivo usando baixo-n�vel */
#include <io.h> /* Para read() e write() */
#include <stdlib.h> /* Para exit() */
#include <string.h> /* Para strlen() */
#include <fcntl.h> /* Necess�rio para flags */
#define TAMBUFF 1024 /* Tamanho do buffer */
char buff[TAMBUFF + 1];

int main(int argc, char **argv)
{
    char *str="Erro: Digite o nome do arquivo na linha de comandos\n";
    int fd, BytesLidos;

    if(argc !=2)
    {
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1) ;
    }

    if((fd = open(argv[1], O_RDONLY | O_BINARY)) < 0)
    {
            str = "Arquivo n�o existe!";
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1);
    }

    while((BytesLidos = read(fd,buff,TAMBUFF)) > 0)
    {
            buff[BytesLidos + 1] = '\0';
            write(1,buff,strlen(buff));
    }
    close(fd);
    return 0;
}
