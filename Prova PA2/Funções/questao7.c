/* 7) Joaquim precisa de ajuda para estudar para a prova de M.D. Um dos tópicos que ele não
compreende bem é o de arranjos. Ele solicitou que você criasse uma função que calcule o
número de arranjos de 'n' elementos tomados ' p ' a ' p ', levando em consideração que a fórmula
de arranjo é:
    Anp = n! / (n-p)! */

#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    while (n > 1) {
        fatorial *= n;
        n--;
    }
    return fatorial;
}

int calcularArranjo(int n, int p) {
    if (n < p) {
        printf("Erro");
        exit(1);
    }
    int diferenca = n - p;
    int arranjo = calcularFatorial(n) / calcularFatorial(diferenca);
    return arranjo;
}

int main() {
    int n, p;

    printf("Qual o valor de n: ");
    scanf("%d", &n);
    printf("Qual o valor de p: ");
    scanf("%d", &p);

    int resultado = calcularArranjo(n, p);

    printf("O resultado do arranjo é igual a: %d", resultado);

    return 0;

}
