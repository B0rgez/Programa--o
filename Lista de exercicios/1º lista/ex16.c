// Para vários tributos, a base de cálculo é o salário mínimo. Fazer um programa que
// leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e
// imprimir quantos salários mínimos ela ganha.
// ----> SUCESSO...
#include <stdio.h>

int main (){
    
    float salario_minimo = 1.412, seu_salario, ganho;

    printf("Insira o valor do seu salario: \n");
    scanf("%f", &seu_salario);

    ganho = salario_minimo + seu_salario;

    printf("Voce ganha: R$ %.2f", ganho);

    return 0;
}