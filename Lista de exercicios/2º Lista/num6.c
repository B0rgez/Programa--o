#include<stdio.h>
//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre a expressa apenas em dias. 
// pronto
int main(){

    int idade, anos, meses;

    printf("Quantos anos voce tem? \nR:");
    scanf("%d", &idade);

    anos = idade * 365;
    meses = idade * 12;

    printf("Sua idade expressa em meses: %d e em dias:%d", meses, anos);

    return 0;
}