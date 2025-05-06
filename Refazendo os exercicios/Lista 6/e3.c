#include <stdio.h>
#define TAM 20

int main()
{

    int valores[TAM], maior = 0, menor = 99999;

    for (int i = 0; i < TAM; i++)
    {
        printf("\nInforme os valores: ");
        scanf("%d", &valores[i]);

        if (valores[i] > maior)
        {
            maior = valores[i];
        }
        else
        {
            menor = valores[i];
        }
    }
    printf("\nO maior valor e: %d", maior);
    printf("\nO menor valor e: %d", menor);

    return 0;
}