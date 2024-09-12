//Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em 
//segundos e mostre-o expresso em horas, minutos e segundos. 
#include<stdio.h>

int main(){

    int tempo, horas, minutos, segundos;

    printf("Quanto tempo (em horas) durou o evento?\n");
    scanf("%d", &tempo);

    horas = tempo;              //Usando a logica basica, consegue chegar a essa resposta;
    minutos = tempo * 60;       // horas para minutos multipica e minutos para segundos multiplica o valor de segundos por 60;
    segundos = minutos * 60;
 
    printf("O evento da fabrica durou : %d horas %d minutos %d segundos", horas, minutos, segundos);

    return 0;
}