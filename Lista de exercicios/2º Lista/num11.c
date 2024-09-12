// escreva um algoritmo que: leia a quantidade de quilos de farinha
// o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água, 
//a quantidade de quilowatts hora de energia, o valor do quilowatt hora e o percentual do 
//imposto que o padeiro paga pelo pão, calcule o preço de custo(chamo de lucro) e o valor de venda, e escreva 
//estes valores. 

//feito

#include<stdio.h>

int main(){

    float kilos, farinha, preco, agua, litros, watts, hora, imposto,venda, total, lucro;

    printf("Digite a quantidade de kilos da farinha:\n");
    scanf("%f", &kilos);

    printf("Digite o preco atual da farinha:\n");
    scanf("%f", &preco);

    printf("Quantos litros foram usados?\n");
    scanf("%f", &agua);

    printf("O valor cobrado dos litros:\n");
    scanf("%f", &litros);

    printf("Quantidade de quilowatts hora cobrados:\n");
    scanf("%f", &watts);

    printf("O valor cobrado do quilowatts:\n");
    scanf("%f", &hora);

    printf("Imposto Cobrado:\n");
    scanf("%f", &imposto);

    printf("Vendera por quanto?\n");
    scanf("%f",&lucro);

    farinha = preco / kilos;

    // aqui é para coloca o preço de venda do produto
    venda = lucro + 1;
    //total que o padeiro vai gastar
    total = (venda + lucro) * 0.3;

    printf("O kilo da farinha:%f\nPreco(farinha):R$ %f\nOs litros: %f\nValor gasto por litro:R$%f\nQuantidade de kilowatts hora cobrado:%f\nImposto cobrado:%f\nO total que o padeiro pagou:%f", kilos, preco, agua, litros, watts, hora, imposto, total);

    return 0;
}