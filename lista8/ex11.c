#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maiusculas(char *string)
{
    for (int i = 0; string[i] != '\0'; i++) 
    {
        string[i] = toupper(string[i]);
    }
    return 0;
}
int minusculas(char *string)
{
    for (int i = 0; string[i] != '\0'; i++) 
    {
        string[i] = tolower(string[i]);
    }
    return 0;
}
int inverter(char *string)
{
    int i = 0, j = strlen(string)-1;
    char aux;
    while (i < j) 
    {
        aux = string[i];
        string[i] = string[j];
        string[j] = aux;
        i++;
        j--;
    }
    return 0;
}

int main()
{
    char string[100];
    int esc;
    int (*modificador) (char[]);
    char *arrayModificada = string;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

     printf("\n Escolha uma opcao: \n 1. Colocar em maiuscula \n 2. Colocar em minuscula\n 3. Inverter\n");
    scanf("%d", &esc);

    if (esc==1) modificador = maiusculas;
    else if (esc==2) modificador = minusculas;
    else if (esc==3) modificador = inverter;
    else {printf("Escolha invalida!!");}

    modificador(arrayModificada);
    printf("%s", string);
    
}
