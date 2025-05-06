/*Lista 3 n 05*/
#include <stdio.h>
#include <math.h>

int main (){

    char nome [100];
    float peso, altura, IMC;

    printf("Nome do paciente: ");
    scanf("%99[^\n]", nome);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    printf("\nAgora altura: ");
    scanf("%f", &altura);

    IMC = peso / pow(altura,2);

    printf("\nNome do paciente: %s\nSeu peso: %.2f\nFaixa de risco: %.2f, logo: ", nome, peso, IMC);
    
    if (IMC > 35)
    {
        printf("Obesidade Morbida");
    }else if (IMC > 30 && IMC < 35){
        printf("Obesidade");
    }else if (IMC > 25 && IMC < 30)
    {
        printf("Excesso de peso");
    }else if (IMC > 20 && IMC < 25){
        printf("Peso Normal");
    }else{
        printf("Abaixo do peso");
    }
    
    return 0;
}