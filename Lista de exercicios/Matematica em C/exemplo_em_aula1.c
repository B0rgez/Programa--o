#include <stdio.h>
#include <math.h>
// EXERCICIO SOBRE POTENCIA
int main(){

    double base, expoente, resultado;

    printf("Informe a base: \n");
    scanf("%lf", &base);

    printf("Informe o expoente: \n");
    scanf("%lf", &expoente);

    resultado = pow (base, expoente);

    printf("O resultado e: %.0lf", resultado);

    return 0;
}