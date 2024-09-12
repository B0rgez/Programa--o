// Teste outras 5 funções da biblioteca math.h além destas anteriores (Escolha Livre).
#include <stdio.h>
#include <math.h>

int main (){

    double cosseno, resultado;

    printf("Informe um radiano da linha do cosseno: \n");
    scanf("%lf", &cosseno);

    resultado = cosh(cosseno);

    printf("O valor dele e: %lf", resultado);
    return 0;
}