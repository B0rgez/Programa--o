//Crie um programa que leia o valor de um depósito e o valor da taxa de juros.
//Calcule e imprima o valor do rendimento e o valor total depois do rendimento
// SUCESSO

#include <stdio.h>

int main(){

    float valor_depositado, taxa_juros, rendimento, total;


    printf("Insire aqui o valor depositado: \n");
    scanf("%f", &valor_depositado);

    printf("Insira os juros sobre o valor: \n");
    scanf("%f", &taxa_juros);

    rendimento = valor_depositado + taxa_juros;
    total = rendimento + valor_depositado;

    printf("O valor total com rendimento: %.2f\n", total);
    printf("O valor do rendimento: %.2f", rendimento);
    return 0;
}