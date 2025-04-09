#include <stdio.h>

int verificaN(float n);

int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    verificaN(n);
}

int verificaN(float n)
{
    if (n > 0)
    {
        return 1;
    }
    else
    {
        if (n < 0)
        {
            return 0;
        }
        else
        {
            printf("Digite um numero diferente de zero\n");
            main();
        }   
    }
}
