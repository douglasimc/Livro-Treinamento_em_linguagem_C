#include <stdio.h>
#include <stdlib.h>

#define MAIUSC(ch)      ((ch) >= 'a' && (ch) <= 'z') ? \
                        ((ch) - 'a' + 'A') : (ch)

int main()
{
    char ch;
    printf("Digite uma letra: ");
    scanf("%c", &ch);
    printf("A letra � %c em mai�sculo.\n", MAIUSC(ch));

    system("PAUSE");
    return 0;
}
