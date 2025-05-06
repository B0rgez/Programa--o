/*Implemente um programa capaz de gerar e imprimir uma matriz de tamanho 10 x
10, onde seus elementos são da forma: */

#include <stdio.h>
#include <math.h>
#define LINHAS 10
#define COLUNAS 10

int main()
{
    int i, j, matriz[LINHAS][COLUNAS];

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (i < j)
            {
                matriz[i][j] = 2 * i + 7 * j;
            }
            else if (i == j)
            {

                matriz[i][j] = 3 * pow(i, 2) - 1;
            }
            else
            {
                matriz[i][j] = 4 * pow(i, 3) - 5 * pow(j, 2) + 1;
            }
        }
    }
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}