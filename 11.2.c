#include <stdio.h>

int main() {

    float custo, venda, porcentual;

    printf("Digite o custo do produto: ");
    scanf("%f", &custo);

    printf("Digite o porcentual do lucro desejado (em %%): ");
    scanf("%f", &porcentual);

    venda = custo * (1 + porcentual/100);

    printf("O preço da venda foi de: R$ %.2f\n", venda);
}