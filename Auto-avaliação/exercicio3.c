/*Lista 3, questao 07*/

#include <stdio.h>

int main()
{

    char posto[100];
    float resultado, consumo_anual, cons_mensal;
    const float litro = 2.13;

    printf("Informe o nome do posto: ");
    scanf("%99[^\n]", posto);

    printf("Valor de consumo anual: ");
    scanf("%f", &consumo_anual);

    cons_mensal = consumo_anual / 12;

    if (consumo_anual <= 50000)
    {
        resultado = litro * 1.2; // 100% + 20% = 120% = 1.2
        printf("Resultado: %f, com aumento de 20", resultado);
    }
    else
    {
        resultado = litro * 1.12;
        printf("Resultado: %f, com aumento de 12", resultado);
    }

    printf("Nome: %s\nPreco do litro: %.2f", posto, resultado);

    return 0;
}