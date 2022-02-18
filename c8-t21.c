#include <stdio.h>  /* Para gets(), printf(), scanf() */
#include <stdlib.h> /* Para system(), atoi(), atof(), exit () */

enum Mes {Jan=1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

int main()
{
    enum Mes m1,m2,m3; /* Cria duas variáveis do tipo enum Mes */ // Na verdade três!

    m1 = Abr;         /* Atibui valores */
    m2 = Jun;

    m3 = m2-m1;     /* Operações aritméticas permitidas */
    if(m1<m2)      /* Comparações permitidas */
        printf("%d\n",m3);

    //m1 = sabado; /* ERRADO. É ilegal */

    typedef enum {Feminino, Masculino} sexo;
    typedef enum {OFF, ON} chave;

    typedef enum {Norte=50, Sul=80, Leste=92, Oeste=100} Direcao;

    sexo s1=Feminino,s2=Masculino;

    printf("Sexo: %d\t%d\n",s1,s2);

    chave c1=OFF,c2=ON;

    printf("Chave: %d\t%d\n",c1,c2);

    Direcao d1=Norte,d2=Sul,d3=Leste,d4=Oeste;

    printf("Direção: %d\t%d\t%d\t%d\n",d1,d2,d3,d4);

    system("PAUSE");
    return 0;
}
