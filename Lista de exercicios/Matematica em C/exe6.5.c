#include <stdio.h>
#include <math.h>

int main (){

    double angulo, resultado;

    printf("Informe o angulo: \n");
    scanf("%lf", &angulo);

    resultado = sinh(angulo);

    printf("O valor dele e: %.3lf", resultado);
    return 0;
}