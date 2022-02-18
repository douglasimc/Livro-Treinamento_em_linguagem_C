/* copiaarq.c */
/* Mostra o uso de fread() e fwrite() */
#include <stdio.h> /* Define FILE */
#include <stdlib.h>

void CopiaArquivo(const char* Origem, const char *Destino);

int main()
{
    char Origem[] = "copiaarq.c";
    char Destino[] = "copiaarq.cpy";

    CopiaArquivo(Origem, Destino);
    system("type copiaarq.cpy");
    system("PAUSE");
    return 0;
}

void CopiaArquivo(const char* Origem, const char *Destino)
{
    unsigned char buffer[1024];
    int ByteLidos;

    FILE *fOrigem, *fDest; /* Ponteiro para arquivo */

    if((fOrigem = fopen(Origem,"rb"))==NULL) return;
    if((fDest = fopen(Destino,"wb"))==NULL) return;
    do
    {
        ByteLidos= fread(buffer,sizeof(char),sizeof(buffer), fOrigem);
        fwrite(buffer,sizeof(char), ByteLidos, fDest);
    } while(ByteLidos);

    fclose(fOrigem);
    fclose(fDest);
}
