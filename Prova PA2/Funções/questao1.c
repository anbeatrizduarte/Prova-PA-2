/* 1) O IMPA (Instituto de Matemática Pura e Aplicada) solicitou que você desenvolva uma função
para ser integrada a um programa existente. Esta nova função deve calcular a área de um
triângulo com base e altura como argumentos. Além disso, crie um pequeno programa para
testar a função que você criou. */
#include <stdio.h>
#include <stdlib.h>


float calcularAreaTriangulo(float base, float altura) {
    float areaTriangulo = (base * altura) / 2;
    return areaTriangulo;
}

int main() {
    float base, altura;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    float resultado = calcularAreaTriangulo(base, altura);

    printf("O resultado é: %.2f", resultado);
}   