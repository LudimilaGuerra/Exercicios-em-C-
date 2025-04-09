/*Faça um programa que calcule o valor aproximado de cos(x) pela série de
Taylor, dado pela aproximação abaixo:*/
#include <stdio.h>
#include <math.h>

int main()
{
	int fatorial, num;
	float xgrau, x, cos = 0;

	printf("Entre com o valor de x, usamos o pi como 3.14: ");
	scanf("%f", xgrau);

	x = xgrau * 3.14 / 180

	for(int i=0; i<10; i+=2)
	{
		num = i;
		fatorial = 1;
		while(num>=1)
		{
			fatorial *= num;
			num--;
		}
		
		cos += pow(-1,i/2)/*pow(x, i)/fatorial;
	}
	printf("cos(%.2f)=%.2f", xgrau, cos);
}
