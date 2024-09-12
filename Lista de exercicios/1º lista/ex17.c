// Crie um programa que leia o saldo de uma aplicação e imprima o novo saldo, considerando o reajuste de 1%.
// SUCESSO
#include <stdio.h>

int main(){
    
    double juros = 0.01, saldo, valor;

    printf("Digite o novo saldo: \n");
    scanf ("%lf", &saldo);

    valor = saldo * juros;
    juros = saldo + valor;

    printf("Vc tem o juros de: %.2lf\n", valor);
    printf("Novo saldo e: %.2lf\n", juros);

    return 0;
}