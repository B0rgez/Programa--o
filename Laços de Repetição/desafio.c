// fazer uma tabuada completa 1 ao 10;
#include <stdio.h>

int main()
{

    int calculo;

    // Estrutura de repetição aninhada

    for (int i = 1; i <= 10; i++)
    {
        printf("\nTabuada de %d:\n", i);
        for (int j = 1; j <= 10; j++) // cuidado com o incremento
        { 
            calculo = i * j;
            printf("%d * %d = %d\n", i, j, calculo);
        }
    }

    return 0;
}