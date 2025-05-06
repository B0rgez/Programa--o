/*Faça um programa que mostre a soma de dois numeros
entre 5 e 10, apenas quando os dois numeros
digitados estiverem no intervalo*/

#include <stdio.h>

int main()
{

    int soma, num;

    for (int i = 0; i < 2; i++)
    {
        printf("Escolha um numero entre 5 a 10: ");
        scanf("%d", &num);

        if (i >= 5 || i <= 10)
        {
            soma = num + i;
        }
        else
        {
            printf("\nIncorreto\n");
        }
    }

    printf("A soma deles: %d", soma);

    return 0;
}