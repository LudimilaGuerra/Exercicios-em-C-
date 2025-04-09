#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int array[], int n)
{
    int aux;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
           if (array[j]>array[j+1])
           {
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
           }
        }
    }
       
}

int crescente(int array[], int n)
{
    printf("Array ordenada: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
int decrescente(int array[], int n)
{
    printf("Array ordenada: ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}


int main()
{
    int tamanhoArray = 10;
    int array[tamanhoArray];
    int *arrayOrdenada = array;
    int esc;
    int (*ordem) (int[], int);

    srand(time(NULL)); //matem sempre uma inicialização diferente
    printf("Array inicial: ");
    for (int i = 0; i < tamanhoArray; i++)
    {
        array[i] = rand()%50; //pega numeros aleatorios de 0 a 50
        printf("%d ", array[i]);
    } //inicializa a array com numeros aleatorios
    
    bubbleSort(arrayOrdenada, tamanhoArray);

    printf("\n Escolha uma ordem: \n 1. Crescente \n 2. Decrescente\n");
    scanf("%d", &esc);

    if (esc==1) ordem = crescente;
    else if (esc==2) ordem = decrescente;
    else {printf("Escolha invalida");}
    
    ordem(array, tamanhoArray);
    
}

