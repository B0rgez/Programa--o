#include <stdio.h>

int main(){

    int num1, num2, soma;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;

    if(soma <= 10){
        
        printf("A soma deles sendo (menor) ou igual: %d", soma);

    }else{
        printf("A soma deles sendo (maior) ou igual: %d", soma);

    }

    return 0;
}