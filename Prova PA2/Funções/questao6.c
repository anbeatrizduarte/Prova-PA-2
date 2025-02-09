/* 6) Marcos possui várias listas onde guarda as notas das equipes de sua empresa e gostaria de
identificar as melhores notas de cada equipe. Ele pediu que você criasse uma função que receba
um vetor (lista) como argumento e o retorne ordenado de forma crescente. */

#include <stdio.h>
#include <stdlib.h>

void organizarNotas(int num, int listaNotas[num]) {
    int temp = 0;
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < (num + 1); j++) {
            if (listaNotas[i] > listaNotas[j]) {
                temp = listaNotas[i];
                listaNotas[i] = listaNotas[j];
                listaNotas[j] = temp;
            }
        }
    }
}

int main() {
    int num;

    printf("Digite o quantidade de notas: ");
    scanf("%d", &num);

    int listaNotas[num];

    for (int i = 0; i < num; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &listaNotas[i]);
    }

    organizarNotas(num, listaNotas);

    printf("As notas em ordem são: ");
    for (int i = 0; i < num; i++) {
        printf("%d", listaNotas[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
    
}