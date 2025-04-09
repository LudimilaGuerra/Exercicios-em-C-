#include <stdio.h>
#include <math.h>


typedef struct
{
    int x;
    int y;
}ponto;

float distancia(ponto p1, ponto p2)
{
    float D;
    D = sqrt(pow((p1.x - p2.x) , 2)+pow((p1.y - p2.y) , 2));
    return D;
}

int main()
{
    ponto p1, p2;
    p1.x = 3;
    p1.y = 5;
    p2.x = 7;
    p2.y = 10;

    printf("A distancia dos pontos e de %.2f", distancia(p1, p2));

}
