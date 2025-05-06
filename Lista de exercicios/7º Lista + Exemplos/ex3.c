/*Preencha uma matriz 5x5 com valores aleatórios entre 0 e 100.*/

#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main()
{
    int i, j, valor = 1, tabela[i][j];

    //Preenchendo
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            tabela[i][j] = valor;
        }
    }
    //Imprimindo os valores
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d",tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}