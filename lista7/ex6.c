#include <stdio.h>

float mediaAri(float n1, float n2, float n3);
float mediaPond(float n1, float n2, float n3);

int main()
{
    float n1, n2, n3;
    char tipo;

    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Escolha: \n A. media aritmetica \n P. media ponderada\n");
    scanf(" %c", &tipo);

    switch(tipo)
    {
        case 'A':
        case 'a':
            printf("Media aritmetica = %.2f", mediaAri(n1, n2, n3));
            break;
            
        case 'P':
        case 'p':
            printf("Media ponderada = %.2f", mediaPond(n1, n2, n3));
            break;
        
        default:
            printf("Escolha invalida");
            break;
    }
}

float mediaAri(float n1, float n2, float n3)
{
    float media;

        media = (n1 + n2 + n3) / 3;

    return(media);
}

float mediaPond(float n1, float n2, float n3)
{
    float media;

    media = (n1*5 + n2*3 + n3*2)/(5+3+2);

    return(media);
}
