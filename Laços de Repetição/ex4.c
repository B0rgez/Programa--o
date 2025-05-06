/* Faça um programa que verifique e mostre os números entre 1.000 e 2.000 
(inclusive) que, quando divididos por 11 produzam resto igual a 2*/

#include <stdio.h>

int main(){

    int calculo;

    for(int i = 1000 ; i <= 2000; i++){
        calculo = i / 11 ;
        printf("\nO Resultado de (%d) e igual a |%d|", i, calculo);
        printf("\nCom Resto: |%d|", calculo % 11 == 1);

    }
    //rever



    return 0;
}