#include<stdio.h>
#include<stdbool.h>
//Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 
//para cada hora abaixo destas 3 horas. Fazer um algoritmo que, dado a quantidade de horas 
//que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar. 
int main(){
    // DUVIDA
    int horas;
    float total;

    printf("Digite o horario que foi alugado:\n");
    scanf("%d", &horas);

    if (horas > 3)
    {
        printf("Taxa cobrada foi: R$ %.2f\n", total); //identificar a taxa MAIOR
        total = horas + 8.50;
    }else{
        printf("Taxa cobrada foi: R$%.2f\n", total); //identificar a taxa MENOR
        total = (horas - 3) * 3.50;
    }

    return 0;
}