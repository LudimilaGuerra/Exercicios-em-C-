#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include "cidades.h"

// Comparar duas cidades pela posição
int comparar(const void *a, const void *b) {
    Cidade *c1 = (Cidade *)a;
    Cidade *c2 = (Cidade *)b;
    return c1->Posicao - c2->Posicao;
}

// Função que lê o arquivo e retorna a struct Estrada
Estrada *getEstrada(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (!arquivo) return NULL;

    Estrada *estrada = (Estrada *)malloc(sizeof(Estrada));
    if (!estrada) {
        fclose(arquivo);
        return NULL;
    }

    if (fscanf(arquivo, "%d", &estrada->T) != 1 || fscanf(arquivo, "%d", &estrada->N) != 1) {
        free(estrada);
        fclose(arquivo);
        return NULL;
    }

    if (estrada->T < 3 || estrada->T > 1000000 || estrada->N < 2 || estrada->N > 10000) {
        free(estrada);
        fclose(arquivo);
        return NULL;
    }

    estrada->C = (Cidade *)malloc(sizeof(Cidade) * estrada->N);
    if (!estrada->C) {
        free(estrada);
        fclose(arquivo);
        return NULL;
    }

    int *posUsadas = (int *)calloc(estrada->T, sizeof(int));
    if (!posUsadas) {
        free(estrada->C);
        free(estrada);
        fclose(arquivo);
        return NULL;
    }

    for (int i = 0; i < estrada->N; i++) {
        int posicao;
        char nome[256];

        // Leitura da posição e nome (com espaços)
        if (fscanf(arquivo, "%d %[^\n]", &posicao, nome) != 2) {
            free(posUsadas);
            free(estrada->C);
            free(estrada);
            fclose(arquivo);
            return NULL;
        }

        if (posicao <= 0 || posicao >= estrada->T || posUsadas[posicao]) {
            free(posUsadas);
            free(estrada->C);
            free(estrada);
            fclose(arquivo);
            return NULL;
        }

        posUsadas[posicao] = 1;
        estrada->C[i].Posicao = posicao;
        strcpy(estrada->C[i].Nome, nome);
    }

    free(posUsadas);
    fclose(arquivo);

    qsort(estrada->C, estrada->N, sizeof(Cidade), comparar);

    return estrada;
}

// Calcula e retorna a menor vizinhança entre todas as cidades
double calcularMenorVizinhanca(const char *nomeArquivo) {
    Estrada *estrada = getEstrada(nomeArquivo);
    if (!estrada) return -1;

    double menor = DBL_MAX;

    for (int i = 0; i < estrada->N; i++) {
        double inicio, fim;

        if (i == 0)
            inicio = 0.0;
        else
            inicio = (estrada->C[i - 1].Posicao + estrada->C[i].Posicao) / 2.0;

        if (i == estrada->N - 1)
            fim = estrada->T;
        else
            fim = (estrada->C[i].Posicao + estrada->C[i + 1].Posicao) / 2.0;

        double vizinhanca = fim - inicio;
        if (vizinhanca < menor) {
            menor = vizinhanca;
        }
    }

    free(estrada->C);
    free(estrada);
    return menor;
}

// Retorna o nome da cidade com a menor vizinhança
char *cidadeMenorVizinhanca(const char *nomeArquivo) {
    Estrada *estrada = getEstrada(nomeArquivo);
    if (!estrada) return NULL;

    double menor = DBL_MAX;
    int indiceMenor = -1;

    for (int i = 0; i < estrada->N; i++) {
        double inicio, fim;

        if (i == 0)
            inicio = 0.0;
        else
            inicio = (estrada->C[i - 1].Posicao + estrada->C[i].Posicao) / 2.0;

        if (i == estrada->N - 1)
            fim = estrada->T;
        else
            fim = (estrada->C[i].Posicao + estrada->C[i + 1].Posicao) / 2.0;

        double vizinhanca = fim - inicio;
        if (vizinhanca < menor) {
            menor = vizinhanca;
            indiceMenor = i;
        }
    }

    // Copiando o nome com malloc (compatível com qualquer compilador)
    char *resultado = (char *)malloc(strlen(estrada->C[indiceMenor].Nome) + 1);
    if (resultado != NULL)
        strcpy(resultado, estrada->C[indiceMenor].Nome);

    free(estrada->C);
    free(estrada);
    return resultado;
}
