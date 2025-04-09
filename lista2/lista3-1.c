#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float a, b, c, aux;

	printf("Escreva tres valores reais: \n");
	scanf("%f %f %f", &a, &b, &c);

	printf("Agora, escolha entre as alternativas: \n 1- ordem crescente \n 2- ordem decrescente \n 3- o maior entre os outros numeros \n");
	scanf("%d", &i);

	if(b>c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	if(a>c)
	{
		aux = a;
		a = c;
		c = aux;
	}
	if(a>b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	if(i==1)
	{
		printf("%.2f, %.2f e %.2f em ordem crescente", a, b, c);
	}
	else if(i==2)
	{
		printf("%.2f, %.2f e %.2f em ordem decrescente", c, b, a);
	}
	else if(i==3)
	{
		printf("%.2f, %.2f e %.2f sendo o numero do meio, o maior.", a, c, b);
	}
	else
	{
		printf("Opcao invalida");
	}
}
