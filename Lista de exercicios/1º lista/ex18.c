//Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% para o garçom. 
//Fazer um programa que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor total com a gorjeta.
//SUCESSO
#include <stdio.h>

int main(){

    float taxa_garcom = 0.1, despesas, total;

    printf("Insira o valor a ser pago: \n");
    scanf("%f", &despesas);

    total = despesas * taxa_garcom;

    printf("O total de gastos : %.2f", total);
    return 0;
}