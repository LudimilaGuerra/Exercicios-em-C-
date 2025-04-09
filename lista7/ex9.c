#include <stdio.h>

void histograma(int t[]);

int main()
{
    int temperaturas[7] = {19, 21, 25, 22, 20, 17, 15};

    histograma(temperaturas);
}

void histograma(int t[])
{
    char dias[7] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'}; //não é necessario, mas usei para facilitar o uso e poder fazer em apenas um for para todos os dias

    for(int i = 0; i < 7; i++)
    {
        printf("%c: ", dias[i]);
        for (int c = 0; c < t[i]; c++)
        {
            printf("-");
        }
        printf("\n");
    }
    
}
