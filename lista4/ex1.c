/*(Impondo privacidade com criptografia) O crescimento explosivo de
comunicação e armazenamento de dados na internet e em computadores
conectados por ela aumentou muito a preocupação com a privacidade. O
campo da criptografia envolve a codificação de dados para torná-los
difíceis de acessar (e espera-se — com os esquemas mais avançados —
impossíveis de acessar) para usuários sem autorização de leitura. Nesse
exercício, você investigará um esquema simples para criptografar e
descriptografar dados. Uma empresa que quer enviar dados pela internet
pediu-lhe que escrevesse um programa que criptografe dados a fim de que
eles possam ser transmitidos com maior segurança. Todos os dados são
transmitidos como inteiros de quatro dígitos. Seu aplicativo deve ler um
inteiro de quatro dígitos inserido pelo usuário e criptografá-lo da seguinte
maneira: substitua cada dígito pelo resultado da adição de 7 ao dígito,
obtendo o restante depois da divisão do novo valor por 10. Troque então o
primeiro dígito pelo terceiro e o segundo dígito pelo quarto. Então, imprima
o inteiro criptografado. Escreva um aplicativo separado que receba a
entrada de um inteiro de quatro dígitos criptografado e o descriptografe
(revertendo o esquema de criptografia) para formar o número original.
[Projeto de leitura opcional: pesquise a “criptografia de chave pública” em
geral e o esquema de chave pública específica PGP (Pretty Good Privacy).
Você também pode querer investigar o esquema RSA, que é amplamente
usado em aplicativos robustos industriais.]*/

#include <stdio.h> 
#include <math.h> 

int main() 
{ 
	int n, n1, n2, n3, n4, s1, s2, s3, s4, d1, d2, d3, d4; 
  
	printf("Digite o dado que deseja enviar: "); 
	scanf("%d", &n); 

	n4 = n % 10; 
	n3 = ((n % 100)- n % 10) / 10; 
	n2 = ((n % 1000)- n % 100) / 100; 
	n1 = ((n % 10000)- n % 1000) / 1000; 
  
	s1 = n1 + 7; 
	s2 = n2 + 7; 
	s3 = n3 + 7; 
	s4 = n4 + 7; 

	//restante quer dizer que ele quer o resto. 
	d1 = s1 % 10; 
	d2 = s2 % 10; 
	d3 = s3 % 10; 
	d4 = s4 % 10; 

	//3412 ordem dos digitos 
	printf("%d%d%d%d", d3, d4, d1, d2); 
} 
