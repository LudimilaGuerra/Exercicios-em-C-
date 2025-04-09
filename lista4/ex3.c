#include <stdio.h>
#include <math.h>

int main()
{
	float pi, n, mais = 0, menos = 0, c = 3;
	int range = 100000;
	//range significa alcance

	for(int i = 1; i <= range; i++) //para os numeros que vao subtrair
	{
		menos -= (4/c);
		c += 4;
	} 
	
	c = 5;
	for(int i = 1; i <= range; i++) //para os numeros que vao somar
	{
		mais+= (4/c);
		c += 4;
	}
	
	pi = 4 + menos + mais;
	printf("%.2f", pi);
}
