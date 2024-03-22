#include <stdio.h>

int main() {

    int nomero;

    printf("Digite o nome: ");
    scanf("%d", &nomero);

    
    if( nomero>10){
        printf("Maior que 10.");
    }
    else{
        printf("Menor que 10.");
    }

    return 0;
}