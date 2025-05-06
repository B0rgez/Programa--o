/*Implemente um programa que leia dois conjuntos de números reais, armazenando
os em vetores. Após, calcule o produto escalar entre eles. Os conjuntos têm 5
elementos cada. Ao final, imprimir os dois conjuntos e o produto escalar, sendo
que o produto escalar é dado por:  x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/

#include <stdio.h>
#define TAM 5

int main()
{

    double numero_x[TAM], numero_y[TAM], produto[TAM], resultado = 0;

    // valores de x
    for (int i = 0; i < TAM; i++)
    {

        printf("\nInsira os valores de x [%d]: ", i);
        scanf("%lf", &numero_x[i]);
    }
    // valores de y
    for (int i = 0; i < TAM; i++)
    {
        printf("\nInsira os valores de y [%d]: ", i);
        scanf("%lf", &numero_y[i]);
    }
    // manipular
    for (int i = 0; i < TAM; i++)
    {
        produto[i] = numero_x[i] * numero_y[i];
        resultado = resultado + produto[i];
    }
    // imprimir
    for (int i = 0; i < TAM; i++)
    {
        printf("\nOs produtos [%.2lf]", produto[i]);
    }

    printf("\nO resulstado final e: %.2lf", resultado);

    return 0;
}