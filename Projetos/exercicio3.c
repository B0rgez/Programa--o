#include <stdio.h>
// SUCESSO
int main(){

   int num1 , num2 , num3 , num4, soma;

   printf("Informe 4 numeros: \n");
   scanf("%d %d %d %d",&num1, &num2, &num3, &num4);

   soma = num1 + num2 + num3 + num4;

   printf("O resultado da soma e %d", soma);

   return 0;
}