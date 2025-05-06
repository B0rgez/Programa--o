/*Entrar com valores inteiros para uma matriz A4x4 e para uma matriz B4x4. Gerar e
imprimir a SOMA (A+B). */

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

int main()
{
    int i, j, soma;
    int matriz_A[LINHAS][COLUNAS];
    int matriz_B[LINHAS][COLUNAS];

    // matriz A
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Posicao A [%d][%d]: ", i, j);
            scanf("%d", &matriz_A[i][j]);
            printf("Posicao B [%d][%d]: ", i, j);
            scanf("%d", &matriz_B[i][j]);
        }
    }
    // Imprimir as Matrizes
    printf("Matriz A:\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", matriz_A[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B:\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", matriz_B[i][j]);
        }
        printf("\n");
    }
    printf("Soma A + B\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", soma = (matriz_A[i][j] + matriz_B[i][j]));
        }
        printf("\n");
    }

    return 0;
}