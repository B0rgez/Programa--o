// Faça um programa que receba um número e usando laços de repetição calcule
// e mostre a tabuada desse número

#include <stdio.h>

int main()
{

    int numero, calculo;

    // quero fazer com que quando interagir, o programa faz a tabuada de qualquer numero;

    printf("\nInsira um numero inteiro:  \n");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        calculo = numero * i;
        printf("\nResultado : %d * %d : %d", numero, i, calculo);
    }

    return 0;
}