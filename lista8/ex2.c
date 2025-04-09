#include <stdio.h>

typedef struct
{
    float real;
    float imaginario;
}complexo;

complexo somaComplexos(complexo n1, complexo n2)
{
    complexo result;
    result.real = n1.real + n2.real;
    result.imaginario = n1.imaginario + n2.imaginario;
    return result;
}

int main()
{
    complexo n1, n2;

    n1.real = 5;
    n1.imaginario = 3;
    n2.real = 9;
    n2.imaginario = 1;

    complexo resultado = somaComplexos(n1, n2);
    printf("A soma (%.2f + %.2fi) + (%.2f + %.2fi) = %.2f + %.2fi", n1.real, n1.imaginario, n2.real, n2.imaginario ,resultado.real, resultado.imaginario);
}

