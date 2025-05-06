/*Implemente um programa que leia uma matriz 5 x 5 e um valor X. O programa
deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização
(linha e coluna) do elemento ou uma mensagem de “elemento não encontrado”.*/

#include <stdio.h>
#define LINHAS 2
#define COLUNAS 2

int main()
{
    int i, j, valor_x, matriz[LINHAS][COLUNAS];

    // entrada para o valor de X
    printf("Defina o valor de X: ");
    scanf("%d", &valor_x);

    // Entrada para preencher a matriz
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Informe a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Fará o escaneamento
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (valor_x == matriz[i][j])
            {
                printf("Elemento encontrado! Na posicao[%d][%d]\n", i, j);
            }
            else
            {
                printf("Elemento nao encontrado\n");
            }
        }
    }

    return 0;
}