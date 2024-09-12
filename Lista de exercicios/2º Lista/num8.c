// Escrever um algoritmo que lê:
// • a percentagem do IPI a ser acrescido no valor das peças;
// • o código da peça 1, valor unitário da peça 1, quantidade de peças 1;
// • o código da peça 2, valor unitário da peça 2, quantidade de peças 2.
// O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // IPI -> valor recomendado 25%
    // peca = valor unitario / quantidade = recursos feitos
    int quantidade1, quantidade2;
    float total, valor1, valor2, peca1 = 4.00, peca2 = 3.50, IPI, percentagem;

    printf("Informe a quantidade de pecas1:\n");
    scanf("%d", &quantidade1);

    printf("Informe a quantidade de pecas2:\n");
    scanf("%d", &quantidade2);

    printf("Digite o valor cobrado por peca1:\n");
    scanf("%f", &peca1);

    printf("Digite o valor cobrado  por peca2:\n");
    scanf("%f", &peca2);

    printf("Informe o IPI - Imposto sobre Produtos Industrializados:\n");
    scanf("%f", &IPI);

    valor1 = peca1 * quantidade1;
    valor2 = peca2 * quantidade2;
    percentagem = (IPI / 100) + 1;
    total = valor1 + valor2 * percentagem;

    printf("Quantidade de pecas 1: %d\nQuantidade de pecas 2: %d\nValor da peca1: %.2f\nValor da peca2: %.2f\n", quantidade1, quantidade2, peca1, peca2);
    printf("Com IPI de %.2f\n Deu num total de R$ %.2f", percentagem, total);

    return 0;
}
//feito