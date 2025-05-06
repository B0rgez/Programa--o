/*Escreva um algoritmo que leia 10 valores e encontre o maior e o menor deles.
Mostre o resultado.*/

#include <stdio.h>

int main()
{

    int numero, maior = 0, menor = 9999;

    for (int i = 1; i < 10; i++)
    {
        printf("\nDigite o %d valor: ", i);
        scanf("%d", &numero);

        //estabelecendo um limite numerico para serem atriuidos.
        if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("\nO maior numero : %d", maior);
    printf("\nO menor numero: %d", menor);

        return 0;
}