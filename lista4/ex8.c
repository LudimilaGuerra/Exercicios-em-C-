/* Faça um aplicativo que verifique se o nÃºmero digitado n Ã© um nÃºmero 
primo. Lembrando que todo nÃºmero primeiro Ã© divisÃ­vel apenas por 1 ou por 
ele mesmo.*/ 

#include <stdio.h> 
#include <math.h> 

int main() 
{ 
  int n = 0, contador = 0; 

  printf("Qual numero voce deseja confirmar se e primo: "); 
  scanf("%d", &n); 

  for(int i = 1; i <= n; i++) 
  { 
    if(n % i==0) 
  { 
    contador++; 
  } 
} 

  printf(contador==2 ? "primo" : "nao e primo"); 

} 
