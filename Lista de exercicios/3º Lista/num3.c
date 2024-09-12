//Fazer um programa que calcule e imprima o salário reajustado de um funcionário de acordo 
//com as seguintes regras: 
//i. Salários de até R$ 350,00 reajuste de 50%; 
//ii. Salários maiores que R$ 350,00 reajuste de 30%. 

#include <stdio.h>

int main (){

    float salario, limite = 350, calculo, por1 = 0.5, por2 = 0.3;

    printf("Digite seu salario:\n");
    scanf("%f", &salario);

    if (salario > limite){
        calculo = salario * por1;
        printf("Salario reajustado!\n");
       
    }else{
        calculo = salario * por2;
        printf("Salario reajustado!\n");
    }

    printf("Seu saldo atual: %.2f", calculo);    

    return 0; 
}