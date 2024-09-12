/*7- Uma distribuidora de combustíveis irá aumentar o combustível em função da quantidade 
comprada anualmente por seus clientes. Os postos que consomem em média até 50.000 
litros de combustível mês, terão aumento de 20%. Os postos que consomem acima desta 
média, 12% de aumento. A distribuidora irá fornecer o nome do posto e seu consumo 
anual. Calcule e escreva qual será o preço do litro de combustível para o posto, 
considerando-se que hoje a distribuidora cobra R$2,13 por litro.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    char nome_posto[100];
    float consumo, litros, calculo, preco = 2.13;

    printf("Informe o nome da distribuidora: ");
    fgets(nome_posto, sizeof(nome_posto),stdin);

    printf("\nInforme os litros utilizados? \nR: ");
    scanf("%f", &litros);

    if (litros >= 50000 && litros < 50000)
    {
        calculo = (litros + 0.2) * preco;
        printf("\nHouve um aumento de 20 por cento");
        printf("\nResultado: %.2f", calculo);
    }else{
        calculo = (litros + 0.12) * preco;
        printf("\nPassou da media, aumento de 12 por cento");
        printf("\nResultado: %.2f", calculo);
    }   

    consumo = calculo / 12;

    printf("\nNome da distribuidora: %s\nConsumo anual: %.2f", nome_posto, consumo);
    return 0;
}