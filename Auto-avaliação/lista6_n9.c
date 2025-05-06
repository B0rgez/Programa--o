#include <stdio.h>
#define TAM 10

int main()
{

    int num[10], soma = 0, contador = 0;

    for (int i = 1; i < TAM; i++)
    {
        printf("Digite o [%d] numeros: ", i);
        scanf("%d", &num[i]);
    }
    printf("\nPares: ");
    for (int i = 0; i < TAM; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("[%d]", i);
            soma += i; //soma os pares
        }
    }
    printf("\nA soma dos pares: %d\n", soma);
    printf("\nImpares: ");
    for (int i = 0; i < TAM; i++)
    {
        if (num[i] % 2 == 1)
        {
            printf("[%d]", i);
            contador += 1; //conta a quantidade de numeros
        }
    }
    printf("\nForam digitados %d impares", contador);

    return 0;
}