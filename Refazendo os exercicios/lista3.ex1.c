#include <stdio.h>

int main (){

    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    if(numero == 2){
        printf("Este numero e PAR");
    }else{
        printf("Este numero e IMPAR");
    }

    return 0;
}