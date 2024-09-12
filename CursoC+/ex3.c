#include<stdio.h>
#include <math.h>
int main(){
    int valor1, valor2, valor3,resultado;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor:\n");
    scanf("%d",&valor3);

    resultado = ((valor1 * valor2) * valor3);

    printf("O resultado e: %d\n", resultado);

    return 0;
}