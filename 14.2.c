#include <stdio.h>

int main() {

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if( num1 > num2){
        printf("O numero %d e o maior.", num1);
    } else {
        printf("O numero %d e o maior", num2);
    }

    return 0;
}