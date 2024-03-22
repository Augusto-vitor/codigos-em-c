#include <stdio.h>

int main() {

    float dola, rs, conta;

    printf("Valor em dola:" );
    scanf("%f", &dola);

    printf("Valor da cotação:" );
    scanf("%f", &rs);

    conta = dola * rs;

    printf("O valor da converção e de:%.2f \n", conta);
}