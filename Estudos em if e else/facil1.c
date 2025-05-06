/*1- Faça um programa que peça dois números e verifique (usando if e else) e imprima o maior deles*/

#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d e maior que %d", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d e maior que %d", num2, num1);
    }
    else
    {
        printf("Ambas iguais");
    }

    return 0;
}