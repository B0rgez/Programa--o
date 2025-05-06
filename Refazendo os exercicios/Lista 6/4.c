#include <stdio.h>
#define TAM 10

int main()
{
    int maior = 0, menor = 99999, valor[TAM], contador1, contador2;

    for (int i = 1; i < TAM; i++)
    {
        printf("Informe o %d valor: ", i);
        scanf("%d", &valor[i]);

        if (valor[i] > maior)
        {
            maior = valor[i];
            contador1 = i;
        }
        else
        {
            menor = valor[i];
            contador2 = i;
        }
        
    }
    printf("\nO maior [%d] Sua posicao [%d]", maior, contador1);
    printf("\nO menor [%d] Sua posicao [%d]", menor, contador2);

    return 0;
}