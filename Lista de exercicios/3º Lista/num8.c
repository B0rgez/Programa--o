#include <stdio.h>
//feito
int main()
{
    int num1, num2;
    float resultado;
    char operacao;

    printf("Digite o pirmeiro numeros: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numeros: ");
    scanf("%d", &num2);

    fflush(stdin);
    printf("Qual da 4 operacoes matematicas? (Obs: '+', '-', '*', '/')\n");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':
     
        printf("A soma dele e: %.2f\n", resultado = num1 + num2);
        break;
    case '-':
        
        printf("A subtracao dos valores: %.2f\n", resultado = num1 - num2);
        break;
    case '*':

        printf("A multiplicacao dos valores: %.2f\n", resultado = num1 * num2);
        break;
    case '/':
        printf("A divisao dos valores: %.2f\n", resultado = num1/ num2);
        break;
    default:
        printf("Operacao invalida");
        break;
    }
    printf("Voce escolheu a operacao (%c) que tem o resultado %.2f", operacao, resultado);
    return 0;
}