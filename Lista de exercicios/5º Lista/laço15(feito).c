/* Escreva um algoritmo que determine se dois valores inteiros e positivos A e B são
primos entre si. (dois números inteiros são ditos primos entre si, caso não exista
divisor comum aos dois números). */

#include <stdio.h>

int main()
{

    int A, B, primos = 1;

    printf("Insira o valor de A: ");
    scanf("%d", &A);
    printf("Insira o valor de B: ");
    scanf("%d", &B);

    for (int i = 2; i <= A && i <= B; i++)
    {

        if (A % i == 0 && B % i == 0)
        {
            primos = 0;
            break;
        }
    }
    if (primos)
    {
        printf("%d e %d sao primos", A, B);
    }
    else
    {
        printf("%d e %d nao sao primos", A, B);
    }

    return 0;
}