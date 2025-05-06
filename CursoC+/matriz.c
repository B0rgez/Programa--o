/*Preencha uma matriz 2x2 lendo valores do usuario e depois
troque  os valores entre o primeiro e a segunda linha*/

#include <stdio.h>
#define LINHA 2
#define COLUNA 2

int main()
{

    int matriz[LINHA][COLUNA]; // CUIDADO, nao esquece das virgulas
    int i, j;

    for (i = 0; i < LINHA; i++) // para preencher a matriz
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("Preencha-a: \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    // para imprimir
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("[");
            printf("%d", matriz[i][j]);
            printf("]");
        }
        printf("\n");
    }

    return 0;
}