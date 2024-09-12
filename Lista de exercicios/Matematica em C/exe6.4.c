#include <stdio.h>
#include <math.h>

int main (){

    double radiano, resultado;

    printf("Informe o radiano: \n");
    scanf("%lf", &radiano);

    resultado = cos(radiano);

    printf("O valor dele e: %.3lf", resultado);
    return 0;
}