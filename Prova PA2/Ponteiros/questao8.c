/* 8) Para lidar com o bug estranho no sistema, onde apenas os números pares de um
vetor lido pelo teclado estão incorretos, o contratante pediu que você faça um
pequeno programa que tenha um vetor de 5 inteiros com números lidos pelo
usuário. Após a leitura, imprima apenas os endereços de memória dos números
pares. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5], *p1;

    p1 = vetor;

    printf("Digite 5 numeros inteiros: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("O numero %d e par e seu endereco e: %p\n", vetor[i], &p1[i]);
        }
    }

    return 0;
}