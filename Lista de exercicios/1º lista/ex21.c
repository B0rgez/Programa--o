//Crie um programa que leia o valor de horas e minutos e informe quantos minutos se passaram desde o início do dia.
// SUCESSO
#include<stdio.h>

int main (){

    int hora, minutos;
    
    printf("informe a hora desejada: \n");
    scanf("%d", &hora);

    minutos = hora * 60; 

    printf("Ja se passaram %d minutos", minutos);

    return 0;
}