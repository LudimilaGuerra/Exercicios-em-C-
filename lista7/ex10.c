#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
    float r, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    area = PI * r * r;
    printf("Area do circulo = %.2f", area);
}
