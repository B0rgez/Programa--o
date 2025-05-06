/*lista 3 , questao 6*/

#include <stdio.h>

int main()
{

    char nome[100] = "Joao";
    int tarifa;
    float saldo_semestral, saldo_mensal;

    printf("\nSalario dele (saldo semestral): ");
    scanf("%f", &saldo_semestral);

    saldo_mensal = saldo_semestral / 6;

    if (saldo_mensal <= 3500)
    {
        tarifa = 0;
        printf("Premio");
    }
    else if (saldo_mensal <= 2000.01 && saldo_mensal < 3500.00)
    {
        tarifa = 13;
        printf("Ouro");
    }
    else if (saldo_mensal <= 1000.01 && saldo_mensal < 2000.01)
    {
        tarifa = 20;
        printf("Prata");
    }
    else
    {
        tarifa = 25;
        printf("Basico");
    }

    printf("\nCliente: %s\nConta: %.2f\nTarifa: %d", nome,saldo_semestral,tarifa);

    return 0;
}