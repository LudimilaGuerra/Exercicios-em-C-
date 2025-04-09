#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
}ponto;

typedef struct
{
    int x1;
    int y1;
    int x2;
    int y2;
}segmento;


float distancia(ponto p1, ponto p2)
{
    float D;
    D = sqrt(pow((p1.x - p2.x) , 2)+pow((p1.y - p2.y) , 2));
    return D;
}

int verificaReta(ponto p1, ponto p2, float d)
{
    if (d<(distancia(p1, p2)+0.001) && d>(distancia(p1,p1)-0.001))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    //esse if "arredonda" o float
    
}

int main()
{
    ponto p1, p2;
    p1.x = 3;
    p1.y = 5;
    p2.x = 7;
    p2.y = 10;

    float c = 6.40; //valor colocado para ser verificado

    printf("O comprimento esta %s", (verificaReta(p1, p2, c)==1?"certo":"errado"));
}

