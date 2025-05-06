/*Criar um algoritmo que entre com valores inteiros para uma matriz m 3 x 3 e imprima a matriz final,
conforme mostrado a seguir:*/
#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main()
{

    int i, j;
    int valor[LINHAS][COLUNAS];
    int reserva[LINHAS][COLUNAS];

    // Preenchendo a matriz com valores
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Posicao[%d][%d]: ", i, j);
            scanf("%d", &valor[i][j]);
        }
    }
    // A matriz irá girar 270º
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            valor[i][j] = reserva[j][i - 1];
        }
    }
    //reservando o valor
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            valor[i][j] = reserva[i][j];
        }
    }
    // Imprimir a matriz normal
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", valor[i][j]);
        }
        printf("\n");
    }
    printf("\n__________________________________________\n");
    // Imprimindo a matriz 270º
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", reserva[i][j]);
        }
        printf("\n");
    }

    return 0;
}