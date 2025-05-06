#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 10){
        printf("Esta entre 0 a 10");
    }else{
        printf("Nao esta entre 0 a 10");
    }

    return 0;
}