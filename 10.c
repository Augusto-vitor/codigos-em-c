#include <stdio.h>

int main() {


   float valor, prestacoes;
   int num = 5; 

   printf("Valor da compra: ");
   scanf("%f", &valor);

   prestacoes = valor / num;
   
   printf("o valor da prestacao foi de: R$ %.2f\n", prestacoes);
}