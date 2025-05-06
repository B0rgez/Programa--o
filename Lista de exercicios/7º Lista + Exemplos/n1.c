/*Implemente um programa que calcule e retorne a soma dos elementos de uma
matriz 5 x 5 de números inteiros. */
#include <stdio.h>
#define LINHA 5
#define COLUNA 5

int main()
{
    int i, j, soma;
    int num[LINHA][COLUNA];

    //Preenchendo os vetores
    for (i = 0; i < LINHA; i++)
    {
        soma = 0;
        for (j = 0; j < COLUNA; j++)
        {
            printf("Informe o valor [%d]: ", j + 1);
            scanf("%d", &num[i][j]);
            soma += num[i][j];
        }
    }
    //Imprimindo os valores
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("[%d]", soma);
        }
        printf("\n");
    }

    return 0;
}