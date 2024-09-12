// Crie um programa que leia 4 número reais e imprima a média aritmética e ponderada (com pesos iguais a 1,2,3 e 4)
//  SUCESSO CANSATIVO...

#include<stdio.h>

int main(){

   float num1, num2, num3, num4, media_aritmetica, ponderada;
    
    printf("Informe os 4 numeros para a media aritmetica: \n");
    scanf("%f, %f, %f, %f", &num1, &num2, &num3, &num4);

    media_aritmetica = (num1 + num2 + num3 + num4) / 4;

    printf("Informe quatro numeros para a media ponderada: \n");
    scanf("%f, %f, %f, %f", &num1, &num2, &num3, &num4);

    ponderada = ( num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4) / 10;

    printf("Os resultados apresentados para a Media Aritmetica e: %.2f\n e a ponderada e igual: %.2f", media_aritmetica, ponderada);

    return 0;
}
