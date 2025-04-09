#include <stdio.h>
#include <string.h>

int main()
{
    struct
    {
        char titulo[50];
        char autor[50];
        char editora[50];
        int anoPublicacao;
    }livro;
    strcpy(livro.titulo, "Harry Potter e a Ordem da Fênix");
    strcpy(livro.autor, "J. K. Rowling");
    strcpy(livro.editora, "Rocco");
    livro.anoPublicacao = 2003;

    printf(" %s \n %s \n %s \n %d", livro.titulo, livro.autor, livro.editora, livro.anoPublicacao);
}

