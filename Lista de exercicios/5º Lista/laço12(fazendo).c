/*Criar um algoritmo que leia dez números inteiros e imprima o maior e o menor
número da lista.*/

#include <stdio.h>

int main()
{

    int numero, maior, menor;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (int i = 1; i < 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }

        if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("\nMaior: %d",maior);
    printf("\nMenor: %d",menor);
    return 0;
}