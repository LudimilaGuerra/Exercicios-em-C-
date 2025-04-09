/*A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, … Os dois primeiros
termos são iguais a 1, e a partir do terceiro, o termo é dado pela soma dos
dois termos anteriores. Dado um número n≥ 3, exiba o n-ésimo termo da
série de Fibonacci. (Não use recursivo.)*/

#include <stdio.h>
#include <math.h>

int main()
{
    int pos;
    long nant, nprox, aux;

    //o long corresponde ao dobro da memoria que o int guarda, sendo assim, possui 8 bytes
    nant = 1;
    nprox = 1;

    printf("Digite a posicao do termo: ");
    scanf("%d", &pos);

    for(int i=2; i<pos; i++)
      {
        aux = nprox;
        nprox = nant + nprox;
        nant = aux;
      }
  //ld corresponde ao long decimal 
  printf("O %d termo da sequencia de fibonacci corresponde a: %ld", pos, nprox);
}
