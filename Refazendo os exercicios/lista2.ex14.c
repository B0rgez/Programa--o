#include <stdio.h>

int main(){

    char funcionario [100];
    float tv_plasma, tv_led, tv_lcd, salario_fixo, total;

    printf("Informe o nome do funcionario: ");
    fgets(funcionario, sizof(funcionario),stdin);

    printf("Quantas Tvs LED vendeu?\n");
    scanf("%f", &tv_led);

    printf("Quantas Tvs  LCD vendeu?\n");
    scanf("%f", &tv_lcd);

    printf("Quantas Tvs Plasma vendeu?\n");
    scanf("%f", &tv_plasma);

    total = (tv_led * 60) + (tv_lcd * 50) + (tv_plasma * 55);

    printf("Nome do Funcionario: %c", funcionario);
    printf("Vendeu %f TVs LED", tv_led);
    printf("Vendeu %f TVs LCD", tv_lcd);
    printf("Vendeu %f TVs Plasmas", tv_plasma);
    printf("Salario: %.2f", total)
    
    return 0;
}