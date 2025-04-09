#include <stdio.h>
#include <string.h>

typedef struct 
{
    char titulo[50];
    char autor[50];
    int ano;
}livro;

void preencherLivro(livro *livro) 
{
    printf("Digite o titulo do livro: ");
    fgets(livro->titulo, sizeof(livro->titulo), stdin);


    printf("Digite o autor do livro: ");
    fgets(livro->autor, sizeof(livro->autor), stdin); 


    printf("Digite o ano de publicacao: ");
    scanf("%d", &livro->ano);

    while (getchar() != '\n'); //limpa o buffer
}

void preencherTabelaLivros(livro livros[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Livro %d:\n", i+1);
        preencherLivro(&livros[i]);
    }
}
void imprimirLivro(livro livro) {
    printf("Titulo: %s", livro.titulo);
    printf("Autor: %s", livro.autor);
    printf("Ano: %d\n", livro.ano);
}
void printLivros(livro livros[], int numLivros) {
    for (int i = 0; i < numLivros; i++) {
        printf("\nLivro %d:\n", i+1);
        imprimirLivro(livros[i]);
    }
}
int main() 
{
    int n;
    printf("Digite o numero de livros: ");
    scanf("%d", &n);

    livro livros[n];

    preencherTabelaLivros(livros, n);
    printf("Livros cadastrados:\n");
    printLivros(livros, n);
}

