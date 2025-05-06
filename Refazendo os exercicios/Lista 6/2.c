#include <stdio.h>
#include <math.h>
#define TAM 3


int main (){
    int numeros[TAM], quadrado;

    for(int i = 0; i < TAM; i++){

        printf("Informe o %d valor: ",i);
        scanf("%d",&numeros[i]);

    }
    for(int i = 0; i < TAM; i++){
        quadrado = pow(numeros[i],2);
        printf("\nO quadrado de %d e: %d",numeros[i], quadrado);

    }



    return 0;
}