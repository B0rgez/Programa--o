#include <stdio.h>
#include <math.h>

int main (){

    int x1, x2, y1, y2, calculo;

    printf("Informe os valores de X (x1 e x2): ");
    scanf("%d %d", &x1, &x2);
    
    printf("Informe os valores de Y(y1 e y2): ");
    scanf("%d %d", &y1, &y2);

    calculo = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));

    printf("\nSua resposta: %d", calculo);
    return 0;
}