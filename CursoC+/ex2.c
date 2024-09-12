#include<stdio.h>
#include<stdlib.h>

int main (){
    //crie um algoritmo que leia 2 notas e mostra o valor absoluto da diferença entre eles.
    int nota1 = 2, nota2 = 3, absoluto;

    absoluto = abs(nota1 - nota2);

    printf("O valor absoluto entre eles sao %d", absoluto);

    return 0;
}