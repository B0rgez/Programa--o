// Crie um programa que leia uma temperatura em graus centígrados e a exiba convertida em graus Fahrenheit e Kelvin.
//SUCESSO
#include<stdio.h>

int main(){

    float celsius, fahrenheit, kelvin;

    printf("Informe o centigrado: \n");
    scanf("%f", &celsius);

    fahrenheit = (celsius + 1.8) / 32;

    kelvin = celsius + 273;

    printf("O resultado em fahrenheit e: %.2f F, ja em kelvin e: %.2f K", fahrenheit, kelvin);

    return 0;
}