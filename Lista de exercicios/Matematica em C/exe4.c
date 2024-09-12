#include <stdio.h>
#include <math.h>
// feito
int main (){
    
    double aproximado;
    float valor;

    printf("Informe um valor decimal:\n");
    scanf("%f", &valor);

    aproximado = ceil(valor); //arredonda para baixo

    printf("O valor arrendodado para cima e: %.3f", aproximado);

    return 0;
}