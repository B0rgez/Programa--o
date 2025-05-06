/* Preencha uma matriz 50x50 com valores de 1 a 2500 em ordem
crescente.*/

#include <stdio.h>
#define LINHAS 40
#define COLUNAS 40

int main()
{

    int i, j, valor = 1;
    int matriz[LINHAS][COLUNAS];

    //Preenchendo os valores na matriz
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = valor;
            valor++;
        }
        
    }
    //Imprimindo os valores
    for (i = 0; i < LINHAS; i++)
    {
        printf("\n");
        for (j = 0; j < COLUNAS; j++)
        {
            printf("[%d]\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}