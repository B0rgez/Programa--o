// faça com que o algoritmo leia um numero inteiro positivo
//calculando e escrevendo so seguintes: numero; quadrado; raiz 
#include<stdio.h>
#include<math.h> //cuidado

int main(){

    int numero, potencia;
    double raiz, quadrado;

    printf("Escreva um numero inteiro positivo:\n");
    scanf("%d", &numero);

    printf("Informe a potencia:\n");
    scanf("%d", &potencia);

    //certifique de ter variavel para identificar os valores
    quadrado = pow(numero, potencia);

    raiz = sqrt(numero);

    printf("Seu numero: %d\nSeu Quadrado: %.2f\nSua raiz: %.2f",numero, quadrado, raiz);
    return 0;
}