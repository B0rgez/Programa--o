/*2- Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo*/

#include <stdio.h>

int main(){

    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    if (valor >= 0)
    {
        printf("Valor Positivo");
    }else{
        printf("Valor Negativo");
    }
    

    return 0;
}