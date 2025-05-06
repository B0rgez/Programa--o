// Feito em sala

#include <stdio.h>

int somar(num1, num2);
int subtrair(num1, num2);
int multiplicar(num1, num2);
int dividir(num1, num2);

int main()
{
    int valor, num1, num2, resultado;
    char opcao;
    do
    {

        printf("Informe um valor diferente de 0 para SAIR: ");
        scanf("%d", &valor);
        printf("Informe um num1: ");
        scanf("%d", &num1);
        printf("Informe um num2: ");
        scanf("%d", &num2);
        fflush(stdin);
        printf("Informe uma operacao matematica: \n");
        printf("[+][-][*][/]:\n");
        scanf("%c", &opcao);
        fflush(stdin);

        switch (opcao)
        {

        case '+':
            resultado = somar(num1, num2);
            printf("Somar selecionado!\n");
            break;
        case '-':
            resultado = subtrair(num1, num2);
            printf("Subtrair selecionado!\n");
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            printf("Multiplicar selecionado!\n");
            break;
        case '/':
            resultado = dividir(num1, num2);
            printf("Dividir selecionado!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
            ;
        }
    } while (valor != 0);

    return 0;
}

int somar(int valorA, int valorB)
{
    return valorA + valorB;
}

int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

int dividir(int valorA, int valorB)
{
    if (valorB != 0)
    {
        return valorA / valorB;
    }
    else
    {
        return 0;
    }
}

int subtrair(int num1, int num2)
{
    return num1 - num2;
}