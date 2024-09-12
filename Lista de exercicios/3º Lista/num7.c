//6- Criar um programa que leia o nome, a conta e o saldo bancário total do semestre de uma 
//pessoa e que calcule a tarifa bancária em que o mesmo se enquadra

#include <stdio.h>

int main (){

    int semestre;
    char nome[100];
    float conta, calculo;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Quantos meses o empregado trabalho: ");
    scanf("%d", &semestre);

    printf("Digite seu salario: R$ ");
    scanf("%f", &conta);

    if (conta > 3500)
    {//como faz o calculo do semestre de uma pessoa?
        calculo = conta + semestre;
        printf("PREMIO");
    }else if (conta < 2000.01)
    {
        calculo = (conta + semestre) - 0.13;
        printf("OURO");
    }else if (conta < 1000.01)
    {
        calculo = (conta + semestre) - 0.2;
        printf("Prata");
    }else{
        calculo = (conta + semestre) - 0.25 ;
        printf("Basico");
    }
    
    return 0;
}