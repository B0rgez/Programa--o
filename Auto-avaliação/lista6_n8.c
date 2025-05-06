#include <stdio.h>
#define TAM 5

int main()
{
    //CONCLUIDO
    float X[TAM], Y[TAM], produto_escalar;

    for (int i = 1; i < TAM; i++)
    {
        printf("Preencha os elementos [%d] de X: ",i);
        scanf("%f", &X[i]);
    }

    for (int i = 1; i < TAM; i++)
    {
        printf("Preencha os elementos [%d] de Y: ",i);
        scanf("%f", &Y[i]);
    }

    for (int i = 1; i < TAM; i++)
    {
        produto_escalar += (X[i] * Y[i]);
    }
    printf("Resultado: %.1f", produto_escalar);

    return 0;
}