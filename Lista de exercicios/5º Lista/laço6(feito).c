#include <stdio.h>

int main()
{
    for (int i = 1; i <= 500 ; i++)
    {
        if( i % 5 == 0){ //(multiplos de 5)
            printf("\n%d", i);
        }

    }
    return 0;
}
