/*Escreva um programa que pergunte o raio de uma circunferência, 
e sem seguida mostre o diâmetro, comprimento e área da circunferência.*/

#include <stdio.h>
#include <math.h>

int main(){

    float raio, diametro, comprimento, area;
    const float pi = 3.1415;

    printf("Indique o raio: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    comprimento = 2 * pi * raio;
    area = pi * pow(raio, 2);

    printf("Resultados:\nDiametro: %.2f cm\nComprimento: %.2f cm\nArea: %.2f", diametro, comprimento, area);
    
    return 0;
}