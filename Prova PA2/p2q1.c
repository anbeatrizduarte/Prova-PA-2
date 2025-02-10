#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void listaRaiz(char* nomeArquivoNum, char* nomeArquivoRaizes) {
    FILE *arquivoNum = fopen(nomeArquivoNum, "r");
    FILE *arquivoRaizes = fopen(nomeArquivoRaizes, "w");
    
    if(arquivoNum == NULL) {
        printf("Erro ao abrir o arquivo de números.");
        exit(1);
    }
    if(arquivoRaizes == NULL) {
        printf("Erro ao abrir o arquivo de raízes.");
        exit(1);
    }
    
    int num;
    double raizes;
    
    while (fscanf(arquivoNum, "%d", &num) != EOF) {
        raizes = sqrt((double) num);
        fprintf(arquivoRaizes, "%.2f\n", raizes);
    }
    
    fclose(arquivoNum);
    fclose(arquivoRaizes);
}

int main() {
    char* nomeArquivoNum = "numeros.txt";
    char* nomeArquivoRaizes = "raizes.txt";
    
    listaRaiz(nomeArquivoNum, nomeArquivoRaizes);
    return 0;
}


