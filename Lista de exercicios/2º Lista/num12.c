//Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo
//se que havia 4 tipos de ingressos assim distribuídos: popular - 10% a R$1,00, geral - 50% a 
//R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.

#include <stdio.h>

int main(){

    float total, popular, geral, arquibancada, cadeiras;

    popular = 0.1 * 1;
    geral = 0.5 * 5;
    arquibancada = 0.3 * 10;
    cadeiras = 0.1 * 20;
    total = popular + geral + arquibancada + cadeiras;
    
    printf("O total: %.2f", total);

    return 0;
}