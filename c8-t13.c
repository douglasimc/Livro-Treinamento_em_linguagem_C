#include <stdio.h>
#include <stdlib.h>

typedef struct 
    {
    	int dia;
        char mes[10];
        int ano;
    } Data;


int main()
{
    static Data aniversario = {30, "julho" ,1995};
    Data Andre;
    
    Andre = aniversario;

    printf("Anivers�rio de Andr�: %d de %s de %d\n", Andre.dia, Andre.mes, Andre.ano);
	
    system("PAUSE");
    return 0;
}
