/*Implemente um algoritmo para calcular o desvio padrão δ de uma coleção
de n números reais*/
#include <stdio.h>
#include <math.h>

int main() 
{ 
  float n1, n2, n3, n4, n5, m, sen1, sen2, sen3, sen4, sen5, vt, dt; 

  printf("Apresente os 5 numero em que deseja que se faça a media:  "); 
  scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5); 

  m = (n1 + n2 + n3 + n4 + n5) / 5;  
  //média aritmética = numeros do conjunto dividido pla quantidade de numeros do conjunto 
  // agora, subtraimos de cada valor do conjunto a média calculada e elevasse o resultado ao quadrado 
  sen1 = pow((n1 - m), 2); 
  sen2 = pow((n2 - m), 2); 
  sen3 = pow((n3 - m), 2); 
  sen4 = pow((n4 - m), 2); 
  sen5 = pow((n5 - m), 2); 
  //por fim, somasse todos os valores e dividesse pelo numero de dados 

  vt  = (sen1 + sen2 + sen3 + sen4 + sen5) / 5;  
  dt = sqrt(vt);   
  
  printf("A media aritmetica foi: %.2f \nA variancia dos dados apresentados: %.2f \nE o desvio padrao corresponde a: %.2f", m, vt, dt); 
} 

 
