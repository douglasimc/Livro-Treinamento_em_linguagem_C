/* learq.c */
/* Lê e imprime arquivo usando baixo-nível */
#include <io.h> /* Para read() e write() */
#include <stdlib.h> /* Para exit() */
#include <string.h> /* Para strlen() */
#include <fcntl.h> /* Necessário para flags */
//#include <stdio.h> /* Para o printf () */
#define TAMBUFF 1024 /* Tamanho do buffer */
char buff[TAMBUFF + 1];

int main(int argc, char **argv)
{
    char *str="Erro: Digite o nome do arquivo na linha de comandos\n";
    int fd, BytesLidos;

    //if(argc !=2)
    if(argc==2) // Evitar o teste
    {
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1) ;
    }

    if((fd = open("asd.asd", O_RDONLY | O_BINARY)) < 0)
    {
            //printf("ERRO NO: %d\n",errno); // Para visualizar o erro
            perror("Não foi possível abrir o arquivo para leitura!");
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
