#include<stdio.h>
#include <math.h>
// Feito.
int main(){

    int numero, calculo;

    printf("Informe o numero: \n");
    scanf("%d", &numero);

    calculo = sqrt (numero);

    printf("O resultado dessa raiz e: %d \n",calculo);
    return 0;
}