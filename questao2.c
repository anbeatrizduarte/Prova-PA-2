// 2) Na documentação desse código, há o uso dos termos "passagem de parâmetros
//por referência/por valor" para algumas funções. Seu contratante pediu que você
//explique o que são ambas e qual a diferença, além de pedir uma demonstração
//prática por meio da criação de uma função simples de potenciação usando ambas
//as abordagens.

#include <stdio.h>
#include <stdlib.h>

int potencia_por_valor(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    printf("Resultado (por valor): %d\n", resultado);
}

int potencia_por_referencia(int *base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= *base;
    }
    *base = resultado;
    printf("Resultado (por referência): %d\n", resultado);
}

int main() {
    int base = 2;
    int expoente = 3;
    
    int resultado_valor = potencia_por_valor(base, expoente);
    printf("Valor original da base: %d\n", base);
    potencia_por_referencia(&base, expoente);
    printf("Base após a potência: %d\n", base);
    return 0;
}



