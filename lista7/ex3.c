#include <stdio.h>

int somaDivisiveis(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Digite 3 numeros inteiros (o primeiro deve ser maior que 1): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Soma dos divisiveis = %d", somaDivisiveis(a, b, c));
}

int somaDivisiveis(int a, int b, int c)
{
    int soma=0, internos;
    if(b>c)
    {
        for (int i = c; i <= b; i++)
        {
            if (i%a==0)
            {
                soma += i;
            }
            
        }
    }
    else
    {    
        if(b<c)
        {
            for (int i = b; i <= c; i++)
            {
                if (i%a==0)
                {
                    soma += i;
                }
            }
        }
        else
        {
            if (b%a==0)
            {
                soma += b;
            }
        }
    }
    return (soma);
    
}

