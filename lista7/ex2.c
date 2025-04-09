#include <stdio.h>

void somaN(int a, int b);

int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros e positivos: ");
    scanf("%d %d", &n1, &n2);

    somaN(n1, n2);
}

void somaN(int a, int b)
{
    if(a>b)
    {
        for (int i = b; i <= a; i++)
        {
            printf("%d + %d = %d\n", i, b, i+b);
        }
    }
    else
    {    
        if(a<b)
        {
            for (int i = a; i <= b; i++)
            {
                printf("%d + %d = %d\n", a, i, a+i);
            }
        }
        else
        {
            printf("%d + %d = %d", a, b, a+b);
        }
    }


    
}

