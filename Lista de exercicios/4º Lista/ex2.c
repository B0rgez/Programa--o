#include <stdio.h>

int main()
{

    float resultado;
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        printf("\n1/%d", i);
        if (i % 2 == 0)
        {
            printf("\nPAR");
            resultado -= (1 / (float)i);
        }
        else
        {
            printf("\nIMAPAR");
            resultado += (1/ (float)i);
        }

        printf("\nResultado: %.2f", resultado);
    }
    return 0;
}