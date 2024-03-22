#include <stdio.h>

int main() {

    float custoF, porcentagemD, imposto, custoC;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoF);

    porcentagemD = 0.28;
    imposto = 0.45;

    custoC = custoF + (custoF * imposto) + (custoF * porcentagemD);
    
    printf("O custo ao consumidor sera de: R$ %.2f\n", custoC);
}