// Crie um programa que leia um numero real e imprima a terça parte deste produto
// SUCESSO!!!
#include<stdio.h>

int main(){

    float numero_real, produto, terca_parte = 0.30;

    printf("Informe o numero real:  \n");
    scanf("%f", &numero_real);

    produto = numero_real / terca_parte;

    printf("O resultado previsto foi: %.2f \n", produto);

    return 0;
}