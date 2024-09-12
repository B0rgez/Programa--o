#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero;

    printf("Inserir numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("numero PAR");
    }
    else
    {
        printf("numero IMPAR");
    }

    return 0;
}