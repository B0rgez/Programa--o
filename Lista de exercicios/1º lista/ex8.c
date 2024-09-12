// Crie um programa que leia dois numeros inteiros e imprimir o produto.
// FEITO COM SUCESSO!
#include<stdio.h>

int main (){

    int num1, num2, produto;

    printf("Informe o numero 1:  \n");
    scanf("%d",&num1);

    printf("Informe o numero 2:  \n");
    scanf("%d",&num2);

    produto = num1 * num2;

    printf ("O produto possui resultado: %d", produto);

    return 0;
}