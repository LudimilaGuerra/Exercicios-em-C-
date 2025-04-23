#include <stdio.h>
#include <stdlib.h>
#include "cidades.h"

int main() {
    FILE *arquivo = fopen("teste01.txt", "r");
    if (!arquivo) {
        printf("Arquivo 'teste01.txt' não encontrado ou inacessível.\n");
        return 1;
    }
    fclose(arquivo); // fecha imediatamente, pois as funções vão abrir novamente

    double menor = calcularMenorVizinhanca("teste01.txt");
    char *cidade = cidadeMenorVizinhanca("teste01.txt");

    if (cidade != NULL) {
        printf("Menor vizinhança: %.2f\n", menor);
        printf("Cidade com menor vizinhança: %s\n", cidade);
        free(cidade);
    } else {
        printf("Erro ao ler os dados.\n");
    }

    return 0;
}
