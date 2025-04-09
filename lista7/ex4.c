#include <stdio.h>

void converTempo(int segundos);

int main()
{
    int seg;

    printf("Digite um valor em segundos: ");
    scanf("%d", &seg);

    converTempo(seg);
}
void converTempo(int segundos)
{
    int hora, min, seg;

    seg = segundos % 60;
    min = (segundos / 60) % 60;
    hora = ((segundos /60) / 60) % 24;

    printf("%d:%d:%d", hora, min, seg);
    
}

