#include<stdio.h>
#include <math.h>

int main (){

    double raiz, valor;
    printf("Informe o valor: \n");
    scanf("%lf", &valor);
    raiz = sqrt(valor);
    printf("O resultado e: %.0lf", raiz);

    return 0;
}