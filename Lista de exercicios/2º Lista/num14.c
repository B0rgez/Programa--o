#include<stdio.h>
//Gostei
int main(){

    float tv_led, tv_lcd, tv_plasma, salario = 1412, total;
    int vendidas1, vendidas2, vendidas3;
    
    printf("Quantas TVs LCD foram vendidas?\n");
    scanf("%d", &vendidas1);

    printf("Quantas TVs LED foram vendidas?\n");
    scanf("%d", &vendidas2);

    printf("Quantas TVs Plasma foram vendidas?\n");
    scanf("%d", &vendidas3);

    //calculo de quantas LCD foram vendidas:
    tv_lcd = vendidas1 * 50;
    //agora LED
    tv_led = vendidas2 * 60;
    //Plasma
    tv_plasma = vendidas3 * 55;
    //o salario e calculado com o total vendidos
    total = tv_lcd + tv_led + tv_plasma + salario; 
    printf("Vendeu:\n%d TVs LCD\n%d TVs LEDs\n%d TVs Plasmas\n", vendidas1, vendidas2, vendidas3);
    printf("O comerciante recebe o salario de: R$%.2f",total);

    return 0;
}