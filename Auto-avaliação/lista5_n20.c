#include <stdio.h>

int main()
{

    float valor_h, n;

    printf("Informe o valor de N: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++)
    {
        valor_h = 1 + (1 / n);
    }

    printf("Resultado: %.1f", valor_h);

    return 0;
}