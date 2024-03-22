#include <stdio.h>

int main() {

    float vT, r1, r2;

    printf("Digite o valor:" );
    scanf("%f", &vT);
    
    r1 = vT * 0.70;
    r2 = r1 + vT;

    printf("O resutado foi de:%.2f\n", r2);
}