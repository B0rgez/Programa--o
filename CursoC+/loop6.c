/*Faça uma tabuada*/
#include <stdio.h>

int main()
{
    int numero, tabuada;

    printf("Informe o numero: ");
    scanf("%d", &numero);
    printf("\nSua Tabuada: \n");
    for (int i = 1; i <= 10; i++)
    {
        tabuada = numero * i;
        printf("\n%d * %d = %d", i, numero, tabuada);
    }

    return 0;
}
