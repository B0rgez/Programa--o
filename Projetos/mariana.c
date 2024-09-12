#include <stdio.h>

int main() {

    int amor;

    printf("Numa escala de 0 a 100 quanto vc ama ela:\n");
    scanf("%d",&amor);

    if (amor > 100)
    {
        printf("EU AMO VC");
    }else{
        printf("EU NAO AMO ELA");
    }

    return 0;
}