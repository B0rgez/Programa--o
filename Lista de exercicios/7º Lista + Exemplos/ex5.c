/*Preencha uma matriz 8x8 de forma que ela se assemelhe a um
tabuleiro de xadrez, alternando os valores entre 'B' e 'W' (preto e
branco)*/

#include <stdio.h>
#define SIZE 8 // Tamanho da matriz

int main()
{
    int i, j;
    char tabuleiro[SIZE][SIZE];

    //preenchendo as matrizes
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if ((i + j) % 2 == 0)
            {
                tabuleiro[i][j] = 'B';
            }
            else
            {
                tabuleiro[i][j] = 'W';
            }
        }
    }
    //Imprimir os valores
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%c\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}