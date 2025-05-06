#include <stdio.h>
#include <math.h>

int main(){

    int numero, j = 1;
    float valor_s;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    for( int i = 1; i <= numero ; i++ )
    {
        printf("\n1 / %d ^ %d", i,j);
        valor_s += (1/ pow(i,j)); //o problema esta aqui no reconhecimento do valor
        j++;
    }

    printf("\nResultado: %.2f", valor_s);
    return 0;
}