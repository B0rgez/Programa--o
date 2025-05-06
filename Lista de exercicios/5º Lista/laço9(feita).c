#include <stdio.h>

int main(){

    int acumulador = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        acumulador += i;
        printf("\nsoma :%d| i:%d", acumulador, i);
    }
    return 0;
}