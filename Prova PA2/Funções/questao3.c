/* 3) Vitória estava jogando um jogo em seu celular e gostaria de saber a pontuação total de todas
as partidas já jogadas. Ela pediu que você criasse uma função que, ao receber dois números (n1
e n2), calcule a soma de todos os números no intervalo entre n1 e n2 (ambos inclusos) e retorne
essa soma. Em seguida, crie um pequeno programa utilizando essa função para testá-la. */

#include <stdio.h>
#include <stdlib.h>

int pontuacaoTotal(int n1, int n2) {
    int soma = 0;
    //n1 = 3  e  n2 = 7
    for (int i = n1; i <= n2; i++) {
        soma+= i;
    }
    return soma;
}

int main() {
    int n1, n2;

    printf("Digite o primeiro número do intervalo: ");
    scanf("%d", &n1);
    printf("Digite o segundo número do intervalo: ");
    scanf("%d", &n2);

    int resultado = pontuacaoTotal(n1, n2);

    printf("A pontuação total é de: %d pontos.", resultado);
    return 0;
}