#include <stdio.h>

float acrescimo(float vInicial, float vNovo);

int main()
{
    float vAntigo, vAtual;
    printf("Digite o valor antigo do produto: ");
    scanf("%f", &vAntigo);

    printf("Digite o valor atual do produto: ");
    scanf("%f", &vAtual);

    printf("O percentual de aumento e de %.1f porcento", acrescimo(vAntigo, vAtual));

}

float acrescimo(float vInicial, float vNovo)
{
    float acrescimo = vInicial/vNovo;
    acrescimo *= 100;
    return(acrescimo);
}

