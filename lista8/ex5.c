#include <stdio.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
}tempo;


int main()
{
    tempo horario;
    horario.hora = 3;
    horario.minuto = 40;
    horario.segundo = 58;

    printf("%.2d:%.2d:%.2d", horario.hora, horario.minuto, horario.segundo);
}
