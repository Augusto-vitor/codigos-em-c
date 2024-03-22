#include <stdio.h>

int main() {

float cM, dT, cT;
    
    printf("Distancia total percorida foi de:" );
    scanf("%f", &dT);
    printf("o Cobustivel gasto no total foi:" );
    scanf("%f", &cT);

    if (cT > 0) {
        cM = dT / cT;
    
    printf("O Consumo medio foi de: %.2f KM/1\n", cM);
    }
    else{
        printf("Erro.");
    }
}
