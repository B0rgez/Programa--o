//Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer
//um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts
//gasta por uma residência, calcule e imprima:
//a. O valor em reais de cada quilowatt;
//b. O valor em reais a ser pago;
//c. O novo valor a ser pago por essa residência com um desconto de 10%.

#include <stdio.h>

int main (){

    float salario, watts, novo_valor, residencia, gasto, desconto = 0.1;

    printf("Salario minimo hoje e: R$\n");
    scanf("%f", &salario);

    printf ("Quantidade de watts gastos e:\n");
    scanf("%f", &watts);

    residencia = (salario / 7) / 100;

    printf("Cada quilowatts em reais gastos sao: R$ %.2f\n", residencia);
    
    gasto = residencia * watts;

    printf("O total para ser pago: %.2f\n", gasto);

    novo_valor = residencia * desconto;

    printf("O novo valor com desconto e: %.2f", novo_valor);

    return 0;
}