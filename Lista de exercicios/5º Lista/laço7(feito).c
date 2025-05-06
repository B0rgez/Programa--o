#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100 ; i++) //limite de intervalo
    {
        if( i % 2 != 0){
            printf("\nOs numero impares: %d", i);
        }

    }
    return 0;
}