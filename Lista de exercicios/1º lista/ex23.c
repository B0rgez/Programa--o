// Crie um programa que calcule a quantidade de litros de combustível gastos em uma
//viagem, sabendo-se que o carro faz 12Km/L. Deverão ser fornecidos o tempo gasto
//na viagem e a velocidade média. O programa deverá apresentar os valores da
//velocidade média, tempo gasto na viagem, distância percorrida e a quantidade de
//litros utilizados na viagem
//sucesso. 
#include <stdio.h>

int main(){

    float velocidade_media, tempo_gasto, litros, distancia_percorrida;

    printf("Quantos litros foram abastecidos : %f", litros);
    scanf("%f", &litros);

    printf("Apresentar o tempo percorrido: %f", tempo_gasto);
    scanf ("%f", &tempo_gasto);

    velocidade_media = distancia_percorrida / litros;


    printf("O valor da velocidade media e: %.2f Km/L\n o tempo: %.2f s\n A distancia percorrida: %.2f Km\n quantidade de litros gastos: %.2f L\n", velocidade_media,tempo_gasto, distancia_percorrida,litros);

    return 0;
}