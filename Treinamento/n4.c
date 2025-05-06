#include <stdio.h>

int main(){

    int A,B, valor_x;

    printf("Informe o valor de A:\n");
    scanf("%d", &A);

    printf("Informe o valor de B:\n");
    scanf("%d",&B);

    valor_x = A + B;

    printf("Resultado de X: \n%d", valor_x);

    return 0;
}