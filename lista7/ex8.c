#include <stdio.h>

int cpf(int n, int d);

int main()
{
    
    cpf(345702159, 71);
}

int cpf(int n, int d)
{
    int a, b, cpf[10], soma = 0, verificador;

    for (int i = 1; i < 10; i++)
    {
        cpf[i] = n%10;
        n /= 10;
        soma += cpf[i];
    }
    a = ((soma%10) * (soma/10));
    a = (a%10) - (a/10);

    soma += a;
    b= ((soma%10) * (soma/10));
    b = (b%10) - (b/10);

    verificador = (a*10) + b;
    if (verificador == d)
    {
        printf("CPF correto");
        return 0;
    }
    else
    {
        printf("CPF incorreto");
        return 1;
    }
    
        
}
