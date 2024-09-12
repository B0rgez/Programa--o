//Crie um algoritmo que leia 2 notas e mostre a media entre ela
#include<stdio.h>

int main(){

    int media, nota1, nota2;

    printf("Digite sua primeira nota:\n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota:\n");
    scanf("%d", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media delas sao: %d", media);
    return 0;
}
