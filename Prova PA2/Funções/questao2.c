/* 2) Carlos está desenvolvendo um aplicativo para sua academia, mas está enfrentando
dificuldades ao aplicar o cálculo do peso ideal. Ele solicitou sua ajuda para criar uma função
chamada "pesoIdeal" que receba a altura e o sexo (1 para masculino e 2 para feminino) como
argumentos. A função deve calcular e retornar o peso ideal da pessoa. Além disso, crie um
pequeno programa para testar a função. */

#include <stdio.h>
#include <stdlib.h>

// fórmula de Broca
float pesoIdeal(float altura, int genero) {
    //peso ideal masculino
    float resul_altura, resul_pesoIdeal;
    if (genero == 1) {
        resul_altura = altura - 100;
        resul_pesoIdeal = resul_altura - (0.1 * resul_altura);
    } else if (genero == 2) {
        resul_altura = altura - 100;
        resul_pesoIdeal = resul_altura - (0.15 * resul_altura);
    } else {
        printf("Erro no cálculo");
    }

    return resul_pesoIdeal;
}

int main() {
    int genero;
    float altura;

    printf("Digite o seu gênero ('1' para masculino e '2' para feminino): ");
    scanf("%d", &genero);
    printf("Digite sua altura em cm: ");
    scanf("%f", &altura);

    float resultado = pesoIdeal(altura, genero);
    printf("O seu peso ideal é: %.2fKg", resultado);

    return 0;
}