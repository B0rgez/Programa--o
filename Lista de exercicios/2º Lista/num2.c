#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// revisar
int main()
{

    float fabrica, consumidor, distribuidor, imposto;

    printf("Digite o valor custado pela fabricacao do carro:\n");
    scanf("%f", &fabrica);

    distribuidor = fabrica * 0.12;
    imposto = fabrica * 0.3;
    consumidor = distribuidor + imposto + fabrica;
    printf("O valor de custo da fabrica foi de %.2f ja do consumidor %.2f\n", fabrica, consumidor);

    return 0;
}
// version teacher
//int main()
//{

    //float custo_fabrica, custo_distribuidor, custo_imposto, custo_final;

//    printf("Informe o custo de fabrica:");
//    scanf("%f", &custo_fabrica);

//    custo_distribuidor = custo_fabrica * 0.12;
//    custo_imposto = custo_fabrica * 0.3;
//    custo_final = custo_imposto + custo_fabrica + custo_distribuidor;

//    printf("Valor final do carro:%.2f", custo_final);

//    return 0;
//}