#include <stdio.h>

int main()
{
    //acumuladora e auxiliar
    int i = 1, j = 1, numero;

    while (i <= 10)
    {
        numero = i + (j - 1);
        j++;
        i += j;
        printf("\n%d", numero);
        
    }
    return 0;
}.