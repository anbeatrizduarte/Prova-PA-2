/* 8) Agora, ele precisa de uma função que calcule o número de combinações. A fórmula de
combinação de 'n' elementos tomados 'p' a 'p' é:
Cnp =n! / p! (n − p)! */

#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int n) {
    int resultado = 1;
    while (n > 1) {
        resultado *= n;
        n--;
    }
    return resultado;
}

int calcularCombinacao(int n, int p) {
    if (n < p) {
        printf("Erro.");
        exit(1);
    }
    int diferenca = n - p;
    int combinacao = calcularFatorial(n) / (calcularFatorial(p) * calcularFatorial(diferenca));
    return combinacao;
}

int main() {
    int n, p;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);

    int resultado = calcularCombinacao(n, p);

    printf("O resultado da combinacao e: %d", resultado);
    return 0;
}