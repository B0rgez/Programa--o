/*Preencha uma matriz 4x4 com números pares começando de 2.*/

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

int main()
{

    int i, j, valor = 2;
    int tabela[LINHAS][COLUNAS];

    // Preenchendo os valores
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            tabela[i][j] = valor;
            valor += 2;
        }
    }
    // Imprimindo os valores
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}