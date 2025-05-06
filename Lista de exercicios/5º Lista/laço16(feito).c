/* Escreva um algoritmo para calcular o fatorial do número N, cujo valor é obtido através
do usuário pelo teclado.*/
#include <stdio.h>

int main()
{
    int n, fatorial = 1;

    printf("Informe o numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    printf("Fatorial de %d! e %d", n, fatorial);
    return 0;
}