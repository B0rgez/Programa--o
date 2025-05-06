/*Implemente um programa que calcule a soma dos elementos de cada linha e
coluna de uma matriz e armazene os resultados em vetores. Ao final, exiba o valor
do somatório das linhas e das colunas armazenados nos vetores. */

#include <stdio.h>
#define LINHAS 2
#define COLUNAS 2
#define TAM 2

int main()
{
    int i, j, tabela[LINHAS][COLUNAS];
    int somaLinhas[LINHAS] = {0};
    int somaColunas[COLUNAS] = {0};

    // PREENCHENDO A MATRIZ TABELA
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Informe as posicoes [%d][%d]: \n", i, j);
            scanf("%d", &tabela[i][j]);
        }
    }
    // Calculando a soma de cada linha e armazenando em somaLinhas

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            somaLinhas[i] += tabela[i][j];
        }
    }

    // Calculando a soma de cada coluna e armazenando em somaColunas
    for (int j = 0; j < COLUNAS; j++)
    {
        for (int i = 0; i < LINHAS; i++)
        {
            somaColunas[j] += tabela[i][j];
        }
    }
    // imprimindo os valores
    printf("Soma das linhas:\n");
    
    for (int i = 0; i < LINHAS; i++)
    {
        printf("Linha %d: %d\n", i + 1, somaLinhas[i]);
    }

    printf("\nSoma das colunas:\n");
    for (int j = 0; j < COLUNAS; j++)
    {
        printf("Coluna %d: %d\n", j + 1, somaColunas[j]);
    }

    return 0;
}
