#include <stdio.h>
#include <math.h>
// FEITO
int main (){

    int x, y;

    printf("Digite o valor de x:\n");
    scanf("%d", &x);

    printf("Digite o valor de y:\n");
    scanf("%d", &y);

    if ( x >= 0 && y >= 0)
    {
        printf("Esta no Primeiro quadrante\n");
    }else if (x < 0 && y >= 0){

        printf("Esta no Segundo quadrante\n");

    }else if (x >= 0 && y <= 0){

        printf("Esta no Terceiro quadrante\n");

    }else{
        printf("Esta no Quarto quadrante\n");
    }
    
    printf("Seus valores:\nx: %d\ny: %d", x, y);

    return 0;
}