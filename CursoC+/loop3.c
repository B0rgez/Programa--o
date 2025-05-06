/*Faça um programa que imprima os numeros pares de 10
até um numero informado pelo usuario*/

#include <stdio.h>

int main()
{

    int i = 10, num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    // Enquanto (while)
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            printf("\n%d\n", i);
        }
        i += 1;
    }
    return 0;
}