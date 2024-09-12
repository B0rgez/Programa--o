#include <stdio.h>
#include <math.h>
// FEITO
int main(){

    double raiz, resultado, quadrado, expoente = 2.0;
    printf("Informe o numero: \n");
    scanf("%lf", &raiz);
    
    resultado = sqrt(raiz);
    quadrado = pow (resultado,expoente);
    printf("O resultado da raiz de %.0lf elevado ao quadrado e: %.0lf", resultado, quadrado);
    return 0;
}