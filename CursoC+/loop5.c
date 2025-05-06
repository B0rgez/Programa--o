/*Faça um programa que mostre a soma de todos os numeros de 
0 a 10, adicionando o valor atual de I numa variavel soma
a cada repetição do laço For*/
#include <stdio.h>

int main(){
    int soma = 0;

    for(int i = 0; i < 10;i++){
        soma += i;
    }
    printf("A soma: %d", soma);
    return 0;
}