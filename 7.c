#include <stdio.h>

int main() {

    float c, f;

    printf("Digite quantos graus celcios:" );
    scanf("%f", &c);

    f=(c* 9/5 )+ 32;

    printf("A converção foi bem sucedida.%.2f\n", f);
}