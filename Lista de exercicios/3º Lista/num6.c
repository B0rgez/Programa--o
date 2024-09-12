#include <stdio.h>
#include <math.h>
//corrigido
int main (){

    char paciente [100];
    float peso, altura, calculo;

    printf("Nome do paciente:\n");
    scanf("%99[^\n]", &paciente);

    printf("Peso corporal:\n");
    scanf("%f", &peso);

    printf("Altura do paciente:\n");
    scanf("%f", &altura);

    calculo = peso * pow(altura,2);

    if (calculo >= 35) // maior ou igual a 35
    {
        printf("Obesidade\n");
    }else if (calculo >= 30 && calculo < 35) // entre 30 e 34.9
    {
        printf("Excesso de peso\n");
    }else if (calculo >= 25 && calculo < 30) // entre 25 e 29.9
    {
        printf("Peso Normal\n");
    }else if (calculo >= 20 && calculo < 25) // entre 20 e 24.9
    {
        printf("Peso ideal\n");
    }else{                                   // abaixo de 20
        printf("Palido\n");
    } 
    
    return 0;
}