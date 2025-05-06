/*Faça um programa que receba do usuário um vetor com 20 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>
#define TAM 20

int main()
{
    
    int maior = 0, menor = 999999;
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {

        printf("Informe o [%d] elemento: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else
        {
            menor = vetor[i];
        }
    }
    printf("\nO maior: %d", maior);
    printf("\nO menor: %d", menor);

    return 0;
}