// QUESTAO 09 - 3º LISTA

#include <stdio.h>

int main()
{

    int dependentes;
    float salario, impostoP, impostoB, impostoL, renda, calculo, taxa;
    char funcionario[100];
    const float salario_minimo = 1412;

    printf("Informe o nome do funcionario: ");
    scanf("%99[^\n]", &funcionario); // ou fgets(funcionario, sizeof(funcionario), stdin);

    printf("\nInforme o numero de dependentes: ");
    scanf("%d", &dependentes); // dependentes = 2;

    printf("\nInforme o Imposto pago: ");
    scanf("%f", &impostoP); // imposto pago = 100

    printf("\nInforme o novo salario: ");
    scanf("%f", &salario); // vale 5.000

    calculo = salario / salario_minimo;

    if (calculo > 12)
    {
        impostoB = salario * 0.2;
        printf("Imposto Bruto (acima de 12 salario minimos): %.2f", impostoB);
    }
    else if (calculo > 5 && calculo < 12)
    {
        impostoB = salario * 0.08;
        printf("\nImposto Bruto (5 salarios minimos)");
        printf("%.2f", impostoB);
    }
    else if (calculo < 5)
    {
        impostoB = salario * 0.4;
        printf("\nImposto nao cobrado,porem ,cobrou 4 por cento\n");
        printf("Resultado: %.2f", impostoB);
    }

    taxa = impostoB * 0.04;
    printf("\nTaxa: %.2f", taxa);

    impostoL = (300.00 * dependentes) - (impostoB + taxa);
    printf("\nImposto Liquido com a taxa: %.2f", impostoL);

    renda = impostoP - impostoL;
    printf("\nImposto pago: R$ %.2f", renda);

    if (renda < 0 && renda > 0)
    {
        printf("\nImposto a pagar\n");
    }
    else
    {
        printf("\nImposto a receber\n");
    }

    return 0;
}