/*Lista 2 - nº 08*/

#include <stdio.h>

int main(){

    int peca1, peca2;
    float valor1, valor2, IPI;
    double total;

    printf("Informe a porcentagem de IPI: ");
    scanf("%f", &IPI);

    printf("\nQuantidade de pecas 1: ");
    scanf("%d", &peca1);

    printf("\nQuantidade de pecas 2: ");
    scanf("%d", &peca2);

    printf("\nValor cobrado pela pecas 1: ");
    scanf("%f", &valor1);

    printf("\nValor cobrado pela pecas 2: ");
    scanf("%f", &valor2);

    total = ((valor1 * peca1) + (valor2 * peca2)) * (IPI / 100 + 1);

    printf("Total: %.2lf", &total);

    return 0;
}