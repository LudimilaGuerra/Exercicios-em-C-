#include <stdio.h>

float soma(float a, float b) {return a+b;}
float subtracao(float a, float b) {return a-b;}
float multiplicacao(float a, float b) {return a*b;}
float divisao(float a, float b) {return a/b;}
float resto(float a, float b) 
{
    int x = (int)a;
    int y = (int)b;
    return x%y;
}

int main()
{
    float (*operacao) (float, float);
    float a, b;
    int esc;

    printf("Digite 2 numeros: ");
    scanf("%f %f", &a, &b);

    printf("Escolha uma operacao: \n 1. Soma \n 2. Subtracao \n 3. Multiplicacao \n 4. Divisao \n 5. Resto\n    ");
    scanf("%d", &esc);

    if (esc==1) operacao = soma;
    else if (esc==2) operacao = subtracao;
    else if (esc==3) operacao = multiplicacao;
    else if (esc==4) operacao = divisao;
    else if (esc==5) operacao = resto;
    else {printf("Escolha invalida");}
    
    printf("Resultado da operacao = %.2f", operacao(a,b));
    

}

