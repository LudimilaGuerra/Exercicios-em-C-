#include <stdio.h>

int boasVindas()
{
    printf("\nBem-vindo ao programa!\n");
    return 0;
}
int erro()
{
    printf("\nErro no sistema\n");
    return 0;
}
int despedida()
{
    printf("\nAte logo!\n");
    return 0;
}

int main()
{
    int esc;
    int *ptr;
    
    printf("Escolha a mensagem:\n1. Boas-vindas\n2. Erro\n3. Despedida\n");
    scanf("%d", &esc);

    if (esc==1) ptr = boasVindas();
    else if (esc==2) ptr = erro();
    else if (esc==3) ptr = despedida();

    ptr;
}

