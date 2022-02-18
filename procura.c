/* procura.c */
/* Procura frase no arquivo usando baixo-n�vel */
#include <io.h> /* Para read() e write() */
#include <stdlib.h> /* Para exit() */
#include <string.h> /* Para strlen() e memchr() */
#include <fcntl.h> /* Necess�rio para flags */
#include <stdio.h> /* Para NULL etc.*/

#define TAMBUFF 1024 /* Tamanho do buffer */
char buff[TAMBUFF];

/* procura() */
/* Procura frase no buffer */
void procura(char *frase, int tambuff)
{
    char *ptr,*p;
    ptr = buff;
    while((ptr = memchr(ptr,frase[0],tambuff)) != NULL)
        if(memcmp(ptr,frase,strlen(frase)) == 0)
        {
                puts("Primeira ocorr�ncia da frase: ");
                for(p = ptr- 100;p < ptr+100; p++)
                      putchar(*p);
                exit(1);
        } else
               ptr++;
}

int main(int argc, char **argv)
{
    char *str="Formato: Procura NomeArq.xxx frase\n";
    int fd, BytesLidos;

    if(argc != 3)
    {
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1) ;
    }

    if((fd = open(argv[1], O_RDONLY)) < 0)
    {
            str = "Arquivo n�o existe!";
            write(1,str,strlen(str)); /* Imprime em stdout */
            exit(1);
    }

    while((BytesLidos = read(fd,buff,TAMBUFF)) > 0)
           procura(argv[2],BytesLidos);
    close(fd);
    str = "Frase n�o encontrada\n";
    write(1,str,strlen(str)); /* Imprime em stdout */
    return 0;
}
