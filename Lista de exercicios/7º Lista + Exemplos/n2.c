/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#define LINHA 5
#define COLUNA 5

int main()
{

    int i, j;
    int matriz[LINHA][COLUNA];

    //INSERINDO VALORES NA MATRIZ
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    //IMPRIMINDO OS VALORES DENTRO DA MATRIZ
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
          printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}