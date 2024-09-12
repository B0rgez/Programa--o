#include <stdio.h>
#include <math.h>
// feito
int main(){

    int valor, resultado;
    printf("Informe o valor para calcular o logaritmo da base 10: \n");
    scanf("%d",&valor);

    resultado = log10 (valor);

    printf("O resultado e: %d", resultado);

    return 0;
}