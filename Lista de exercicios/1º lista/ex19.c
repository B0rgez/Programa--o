//) Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. 
//Faça um programa que possa entrar com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi de 9%.

//sucesso.
#include <stdio.h>

int main(){

    float valor_produto = 2300, desconto = 0.09, novo_valor;

    novo_valor = valor_produto * desconto;

    printf("Com desconto o produto vale R$ %.2f", novo_valor);

    return 0;
}