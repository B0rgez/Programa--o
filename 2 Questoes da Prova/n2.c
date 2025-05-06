#include <stdio.h>
#define TAM 10

int main()
{
    int valor_x[TAM] = {2, 4, 1, 6, 7, 8, 9, 3, 10, 11};
    int valor_y[TAM] = {12, 3, 8, 1, 15, 26, 5, 14, 10, 13};
    int soma, produto, diferenca[TAM], interseccao[TAM];

    printf("Soma dos elementos:\n");
    for (int i = 0; i < TAM; i++)
    {
        soma = valor_x[i] + valor_y[i];
        printf("[%d]", soma);
    }

    printf("\nProduto dos elementos:\n");
    for (int i = 0; i < TAM; i++)
    {
        produto = valor_x[i] * valor_y[i];
        printf("[%d]", produto);
    }

    printf("\nDiferenca dos elementos:\n");
    for (int i = 0; i < TAM; i++)
    {
        if ()
        {
        }
    }
    printf("\nInterseccao dos elementos:\n");
    /*for (int i = 0; i < TAM; i++)
    {
        if(valor_x == valor_y){
            interseccao = ; 
            printf("");
        }

    }
*/
    return 0;
}