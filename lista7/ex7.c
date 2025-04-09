#include <stdio.h>

void retangulo(int m, int n);

int main()
{
    int h, l;
    printf("Digite a altura do retangulo: ");
    scanf("%d", &h);
    printf("Digite a largura do retangulo: ");
    scanf("%d", &l);

    retangulo(h, l);
}

void retangulo(int m, int n)
{
    for(int linha = 1; linha <= m; linha++)
    {
        for(int coluna = 1; coluna <= n; coluna++)
        {
            if (coluna > 1 && coluna < n && linha > 1 && linha < m)
            {
                printf("  ");
            }
            else
            {
                printf(" *");
            }
            
        }
        printf("\n");
    }
    
}
