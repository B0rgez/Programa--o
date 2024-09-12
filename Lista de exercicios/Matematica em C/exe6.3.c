#include <stdio.h>
#include <math.h>

int main (){

    double numero, expoente, resultado;

    printf("Informe: \n");
    scanf("%lf", &numero);

    resultado = modf(numero, &expoente);

    printf("O valor dele e: %lf", resultado);
    return 0;
}