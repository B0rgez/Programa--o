// ) Crie um programa que leia dois valores para as variáveis A e B e efetue a troca dos valores, ou seja, A passa a ter o valor de B e B passa a ter o valor de A. Apresentar os valores trocados.
// SUCESSO
#include <stdio.h>

int main (){

    int var1, var2 , troca;

    printf("Informe o valor para a primeira variavel: \n");
    scanf("%d", &var1);

    printf("Informe o valor para a segunda variavel: \n");
    scanf("%d", &var2);

    troca = var1;
    var1 = var2;
    var2 = troca;

    printf("A troca de valores sao: %d %d ", var1, var2);

    return 0;
}