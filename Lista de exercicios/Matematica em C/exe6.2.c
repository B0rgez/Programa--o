#include <stdio.h>
#include <math.h>
// -1 <= seno <= 1
int main (){

    double resultado, seno;

    printf("Informe o seno: \n");
    scanf("%lf", &seno);

    resultado = asin(seno);

    printf("O valor dele e: %lf", resultado);
    return 0;
}