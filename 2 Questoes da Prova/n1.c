#include <stdio.h>
#define LINHAS 2
#define COLUNAS 2

int main()
{

    int i, j, matriz[LINHAS][COLUNAS], produto, soma;

    // Preenchimento da matriz
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz Original:\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz Modificada:\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                produto = matriz[i][j] * 2;
                printf("[%d]\t", produto);
            }
            else
            {
                soma = matriz[i][j] + 3;
                printf("[%d]\t", soma);
            }
        }
        printf("\n");
    }

    return 0;
}