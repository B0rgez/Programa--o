// Crie um programa que leia dois numeros inteiros e imprimir a soma
// FEITO COM SUCESSO
#include <stdio.h>

int main(){

    int num1, num2, soma;

    printf("Informe o numero 1: \n");
    scanf("%d", &num1);

    printf("Informe o numero 2: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf ("O resultado da soma dos algarismos sao: %d", soma);

    return 0;
}