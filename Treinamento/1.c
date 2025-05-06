#include <stdio.h>

int main(){

    int num1,num2, multiplo;

    printf("Informe dois valores:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    multiplo = num1 * num1;

    if(multiplo == num2){
        printf("Sao multiplos");
    }else{
        printf("Nao sao multiplos");
    }


    return 0;
}