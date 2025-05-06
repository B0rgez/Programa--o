#include <stdio.h>
#include <math.h>
#define TAM 10 // quantidade de vetores, espaço

int main()
{
    double reais[TAM], quadrado[TAM];

    // inserindo os valores nos vetores
    for (int i = 0; i < TAM; i++)
    {
        printf("\nInforme o numero [%d] reais: ", i);
        scanf("%lf", &reais[i]);
    }
    // manipulando os vetores
    for (int i = 0; i < TAM; i++)
    {
        quadrado[i] = pow(reais[i], 2);
    }
    // imprimindo os quadrados
    printf("Vetor Reais:\n ");
    printf("[");
    for (int i = 0; i < TAM; i++)
    {
        printf("%.0f,", reais[i]);
    }
    printf("]");

    printf("\nVetor Quadrado:\n ");
    printf("[");
    for (int i = 0; i < TAM; i++)
    {
        printf("%.0f,", quadrado[i]);
    }
    printf("]");

    return 0;
}
