#include <stdio.h>

int main(){

    int acumulador = 0;
    float media;
    
    for (int i = 1; i <= 100; i++)
    {
        acumulador += i;
        media = acumulador / 100;
        
        
        //printf("\nMedia : %.2f | i: %d", media, i);
        printf("\n____________________________\n");
        printf("\nAcumulador: %d", acumulador);
        printf("\ni: %d", i);
        printf("\nMedia: %.2f", media);
    }
    return 0;
}