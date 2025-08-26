#include <string.h>
#include <stdio.h>

struct Filme {  //struct Filme.
    int id;
    char titulo[102];
    int ano;
    int duracao;
};

int main(){
    struct Filme filme; //cria a variavel dentro da struct Filme. O nome dessa variavel é filme.
    scanf("%d", &filme.id);
    getchar(); //getchar para tirar o buffer do \n, que vem do %d.
    fgets(filme.titulo, 102, stdin); //le a string. Se atentar com o nome da variavel '.' onde quer acessar, ex: filme.titulo.
    filme.titulo[strcspn(filme.titulo, "\n")] = '\0'; //tira o \n para não dar problema no printf.
    scanf("%d", &filme.ano);
    scanf("%d", &filme.duracao);

    printf("Codigo do filme: %d\nTitulo do filme: %s\nAno de lancamento: %d\nDuracao do Filme: %d\n", filme.id,filme.titulo,filme.ano,filme.duracao);
    return 0;
}
