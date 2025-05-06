/*Criar um algoritmo que carregue uma matriz 12 x 4 com os valores das vendas de
uma loja, em que cada linha represente um mês do ano, e cada coluna, uma semana
do mês. Para fins de simplificação considere que cada mês possui somente 4
semanas. Calcule e imprima: - Total vendido em cada mês do ano; - Total vendido
em cada semana durante todo o ano; - Total vendido no ano.*/

#include <stdio.h>
#include <conio.h> //inclui a biblioteca randomica
#define MESES 12  // Linhas
#define SEMANAS 4 // Colunas

int main()
{
    int i, j, soma = 0,acumulador_mes = 0;
    float acumulador_semanal_ano = 0;
    float total_semanal[MESES * SEMANAS];
    float total_mensal[MESES];
    float vendas[MESES][SEMANAS];

    // Preenchendo as matriz + semanas
    for (i = 0; i < MESES; i++)
    {
        acumulador_mes = 0;

        for (j = 0; j < SEMANAS; j++)
        {
            vendas[i][j] = rand() % 1000; // numeros randomificados
            acumulador_mes += vendas[i][j];
            total_semanal[soma] = vendas[i][j];
            soma++;
        }
        total_mensal[i] = acumulador_mes;
    }

    // Imprimindo as matrizes
    for (i = 0; i < MESES; i++)
    {
        for (j = 0; j < SEMANAS; j++)
        {
            printf("%.2f\t", vendas[i][j]);
        }
        printf("\n");
    }
    printf("\n____________________________________________________________\n");
    // imprimindo o total em cada mes do ano
    for (i = 0; i < MESES; i++)
    {
        printf("\n");
        printf("Mes %d: R$ %.2f\n", i + 1, total_mensal[i]);
    }
    printf("\n____________________________________________________________\n");
    //Semana 
    for (i = 0; i < MESES * SEMANAS; i++)
    {
        printf("\n");
        printf("Semana %d: R$ %.2f\n", i + 1, total_semanal[i]);
        acumulador_semanal_ano += total_semanal[i];
    }
    printf("\n____________________________________________________________\n");
    printf("\n");
    printf("Total do ano: R$ %.2f", acumulador_semanal_ano);
    return 0;
}
