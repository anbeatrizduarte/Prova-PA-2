/* 3) Ana precisa criar uma lista que determine se os números de 1 até N, onde N é um número
qualquer, são primos ou não. Como ela está sem tempo, ela pediu ajuda. Um exemplo dessa
lista com N=6 seria: */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcularPrimos(int num) {
    if (num <= 1) {
        return 0;
    }

    if (num == 2) {
        return 1;
    }

    if (num % 2 == 0) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;

}

int main() {
    int num = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &num);

    FILE *arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        if (calcularPrimos(i)) {
            fprintf(arquivo, "%d Primo\n", i);
        } else {
            fprintf(arquivo, "%d NPrimo\n", i);
        }
    }

    fclose(arquivo);
    return 0;
}