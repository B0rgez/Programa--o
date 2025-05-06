/*Lista 2 questao 13*/

#include <stdio.h>
#include <math.h>

int main (){

    int numero;
    float raiz, potencia;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    raiz = sqrt(numero); 
    potencia = pow(numero,2);

    printf("Resultado:\nNumero: %d\nRaiz: %.2f\nQuadrado: %.2f",numero, raiz, potencia);


    return 0;
}