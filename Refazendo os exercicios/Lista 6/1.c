#include <stdio.h>
#define TAM 6

int main (){
    int A[TAM] = {1,0,5,-2,-5,7};
    int soma = A[0] + A[1] + A[5];
    
    A[4] = 100;

    printf("A posicao 4 vale: %d", A[4]);
    printf("\nA soma e: %d", soma);

    for(int i = 0; i < TAM; i++){
        printf("\n[%d] - %d",i, A[i]);
    }



    return 0;
}