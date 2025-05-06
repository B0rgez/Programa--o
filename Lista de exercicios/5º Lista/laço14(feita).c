/* Escreva um algoritmo que leia 10 números inteiros e imprima quantos são pares e
quantos são ímpares. */

#include <stdio.h>

int main()
{

    int num, par = 0, impar = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira os %d numeros: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par += 1; // par = par + 1;
        }
        else
        {
            impar += 1; // impar = impar + 1;
        }
    }
    printf("\nSao %d pares", par);
    printf("\nE %d impares", impar);

    return 0;
}