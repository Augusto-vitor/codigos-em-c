#include <stdio.h>

    int main() {

        char nome[100];
        float nota1, nota2, nota3, media;

        printf("Nome do aluno: ");
        scanf("%s", nome);

        printf("Resutado da primaira prova: ");
        scanf("%f", &nota1);

        printf("Resuado da segunda prova: ");
        scanf("%f", &nota2);

        printf("Resutado da terceira prova: ");
        scanf("%f",&nota3);

        media = (nota1+nota2+nota3)/3;
        printf("Aluno: %s a media de sua nota no perildo avaliativo foi de:%.2f\n", nome, media);
    }