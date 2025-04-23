#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidades.h"

void imprimirEstrada(Estrada *estrada) {
    if (!estrada) {
        printf("Estrada nula!\n");
        return;
    }

    printf("Tamanho da estrada (T): %d\n", estrada->T);
    printf("Número de cidades (N): %d\n", estrada->N);
    for (int i = 0; i < estrada->N; i++) {
        printf("Cidade %d: Posição = %d, Nome = %s\n", i + 1, estrada->C[i].Posicao, estrada->C[i].Nome);
    }
}

int main() {
    const char *arquivoTeste = "teste01.txt";

    // Verifica se o arquivo existe
    FILE *check = fopen(arquivoTeste, "r");
    if (!check) {
        printf("Erro: Arquivo '%s' não encontrado.\n", arquivoTeste);
        return 1;
    }
    fclose(check);

    // Lê e imprime a estrutura completa
    Estrada *T1 = getEstrada(arquivoTeste);
    if (!T1) {
        printf("Erro ao carregar estrutura Estrada.\n");
        return 1;
    }

    printf("==== Dados da Estrada ====\n");
    imprimirEstrada(T1);

    // Teste 1: menor vizinhança
    double D1 = calcularMenorVizinhanca(arquivoTeste);
    printf("\nMenor vizinhança calculada: %.2f\n", D1);

    // Teste 2: cidade com menor vizinhança
    char *C1 = cidadeMenorVizinhanca(arquivoTeste);
    if (C1) {
        printf("Cidade com menor vizinhança: %s\n", C1);
        free(C1);
    } else {
        printf("Erro ao encontrar cidade com menor vizinhança.\n");
    }

    // Liberar estrutura
    free(T1->C);
    free(T1);

    return 0;
}
