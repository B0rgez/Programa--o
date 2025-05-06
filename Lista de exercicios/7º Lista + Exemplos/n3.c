/*Implemente um programa que verifique se uma matriz 2 x 3 é simétrica, ou seja,
se é igual à sua transposta. Ao final, retorne se a matriz é transposta ou não. */

#include <stdio.h>
#define LINHAS 2
#define COLUNAS 3

int main()
{

    int i, j;
    int matriz[LINHAS][COLUNAS], transposta[COLUNAS][LINHAS];

    printf("Informe os elementos para serem implementados na Matriz 2x3\n");

    // Inserindo so valores normal
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Posicoes [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Inserindo so valores transposta
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Posicoes [%d][%d]: ", i, j);
            scanf("%d", &transposta[j][i]);
        }
    }

    if ((matriz[i][j] == transposta[j][i]))
    {
        printf("E simetrica\n");
    }
    else
    {
        printf("Nao e simetrica\n");
    }

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if ((matriz[i][j] == transposta[j][i]))
            {
                printf("%d\t", transposta[j][i]);
            }
            else
            {
                printf("%d\t", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}