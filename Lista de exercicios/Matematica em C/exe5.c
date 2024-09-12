#include <stdio.h>
#include <math.h>
//feito
int main (){
    
    double aproximado;
    float valor;

    printf("Informe um valor decimal:\n");
    scanf("%f", &valor);

    aproximado = floor(valor); //arredonda para baixo

    printf("O valor arrendodado para baixo e: %f",aproximado);
    
    return 0;
}