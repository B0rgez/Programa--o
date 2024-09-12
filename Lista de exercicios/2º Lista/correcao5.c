#include <stdio.h>

int main()
{

    float horas, total, valor_hora, diferenca;

    printf("Qual horario escolhido:\n");
    scanf("%f", &horas);

    if (horas > 3)
    {
        valor_hora = 8.5 /3; 
        diferenca = horas - 3;
        total = 8.5 + (diferenca * valor_hora);
        printf("O valor cobrado foi: R$ %.2f\n", total);
    }
    else
    {
        total = horas * 3.50;
        printf("O valor depois: R$ %.2f\n", total);
    }
    printf("O valor final e: %.2f", total);

    return 0;
}