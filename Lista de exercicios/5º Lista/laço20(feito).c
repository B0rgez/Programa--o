#include <stdio.h>

int main()
{
    int numero;
    float valor_H;

    printf("\nDigite o numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        valor_H = valor_H + (1.0 /(float)i);
        printf("%d / %d\n", 1, i);
    }
    printf("\nResultado: %.2f", valor_H);

    return 0;
}