#include <stdio.h>

typedef struct
{
    int hora;
    int minuto;
    int dia;
    int mes;
    int ano;
}horario;

typedef struct
{
    char cidadeOrigem[50];
    char cidadeDestino[50];
    horario horarioOrigem;
    horario horarioDestino;
}voo;

int main()
{
    
    voo dadosVoos[5] =
        {
            {"Brasilia", "Salvador", {17, 00, 01, 11, 2024}, {18, 45, 01, 11, 2024}},
            {"São Paulo", "Rio de Janeiro", {10, 30, 5, 12, 2024}, {12, 15, 5, 12, 2024}},
            {"Nova York", "São Francisco", {9, 45, 10, 11, 2024}, {12, 20, 10, 11, 2024},
            },
            {"Tóquio", "Sydney", {18, 25, 15, 1, 2025}, {10, 15, 16, 1, 2025}},
            {"Berlim", "Buenos Aires", {13, 10, 2, 3, 2025}, {19, 55, 3, 3, 2025}}
        };
    
    for (int i = 0; i < 5; i++)
    {
        printf("Voo de %s, com destino a %s, saindo as %.2d:%.2d do dia %.2d/%.2d/%.2d e chegando as %.2d:%.2d do dia %.2d/%.2d/%.2d\n", dadosVoos[i].cidadeOrigem, dadosVoos[i].cidadeDestino, dadosVoos[i].horarioOrigem.hora, dadosVoos[i].horarioOrigem.minuto, dadosVoos[i].horarioOrigem.dia, dadosVoos[i].horarioOrigem.mes, dadosVoos[i].horarioOrigem.ano, dadosVoos[i].horarioDestino.hora, dadosVoos[i].horarioDestino.minuto, dadosVoos[i].horarioDestino.dia, dadosVoos[i].horarioDestino.mes, dadosVoos[i].horarioDestino.ano);
    }
}

