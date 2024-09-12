//Escrever um algoritmo que lê o número de um funcionário, seu número de horas 
//trabalhadas, o valor que recebe por hora, o número de filhos com idade menor que 14 anos 
//e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o salário 
//total deste funcionário e escreva o seu número e o seu salário total.

#include<stdio.h>
#include<stdlib.h>
int main(){

    char funcionario[100]; //como colocar nome completo
    int horas_t, filhos;
    float salario, total;

    printf("Escreva o nome do funcionario:\n");
    //scanf("%99[^\n]", funcionario);
    fgets(funcionario,sizeof(funcionario),stdin);

    printf("Horas trabalhadas:\n");
    scanf("%d", &horas_t); //nao progrede aqui

    printf("Quantos filhos (com idade menor que 14 anos):\n"); 
    scanf("%d", &filhos);

    printf("Seu salario: \n");
    scanf("%f", &salario); // De acordo com INSS, o empregado deve ter R$ 1.819,26

    total =  (salario / horas_t) + (filhos * 62.04); //lembrete = R$62,04 por mês
    //Encontre o número de horas que você trabalhou. Divida seu salário pelo número de horas que você trabalhou
    //Calcular o salário-família é simples: basta multiplicar o número de filhos dependentes pelo valor atual da cota.

    printf("Nome: %s\nTrabalhou por %d\nTem %d filhos (menores que 14 anos)\nRecebe no total: R$ %f",funcionario, horas_t, filhos, total);

    return 0;
}