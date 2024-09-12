#include <stdio.h>

int main(){

    float salario, IR, salario_liquido;
    char nome [100];

    printf("Nome do Funcionario: ");
    scanf("%99[^\n]", nome);

    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &salario);

    if(salario > 4664.68){
        IR = (salario * 0.275) - 869.36;
        printf("\nImposto1: %.2f", IR);

    }else if(salario = 3751.06 && salario < 4664.68){
        IR = (salario * 0.225) - 636.13; 
        printf("\nImposto2:  %.2f", IR);

    }else if(salario = 2826.66 && salario < 3751.06){
        IR = (salario * 0.15) - 354.80;
        printf("\nImposto3: %.2f", IR);
    
    }else if (salario = 1903.99 && salario < 2826.65){
        IR = (salario * 0.75) - 142.80;
        printf("\nImposto4: %.2f", IR);
    }else{
        printf("\nImposto5: %.2f", IR);
    }
    //salario liquido
    salario_liquido = salario - IR;
    
    printf("\nFuncionario: %s", nome);
    printf("\nSalario: %.2f", salario);
    printf("\nImposto de renda: %.2f", IR);
    printf("Salario Liquido: %.2f", salario_liquido);

    return 0;
}