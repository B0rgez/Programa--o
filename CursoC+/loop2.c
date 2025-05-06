/*Faça um programa que imprima os numeros pares de 10 até um numero informado pelo usuario*/
#include <stdio.h>

int main()
{

    int calculo, num;
    int i = 10;

    printf("Informe um numero: ");
    scanf("%d", &num);

    while (i > 10)
    {
        calculo = (num % 2 == 0);
        printf("%d", calculo);
        
    }
    return 0;
}