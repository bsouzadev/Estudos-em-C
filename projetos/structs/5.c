#include <stdio.h>

typedef struct{
  int id;
  char titulo[100];
  int duracao;
  int ano;
} Filme;

void imprime_filme(Filme filmes[], int n, int id);

int main() {
    // Criando um vetor de filmes para teste
    Filme filmes[4] = {
        {1, "Matrix", 136, 1999},
        {2, "Interestelar", 169, 2014},
        {3, "Cidade de Deus", 130, 2002},
        {4, "Parasita", 132, 2019}
    };
    
    int n = 4;
    printf("=== Teste da função imprime_filme ===\n\n");
    
    // Teste 1: ID que existe
    printf("Buscando filme com ID 2:\n");
    imprime_filme(filmes, n, 2);
    
    printf("\n");
    
    // Teste 2: ID que não existe
    printf("Buscando filme com ID 10:\n");
    imprime_filme(filmes, n, 10);
      
    return 0;
}

void imprime_filme(Filme filmes[], int n, int id){
    int cont =0;
    for(int i=0; i<n; i++){
        if(filmes[i].id == id){
            printf("%s\n%d\n%d\n", filmes[i].titulo, filmes[i].ano, filmes[i].duracao);
            cont = 1;
        }
    }

    if(cont == 0){
        printf("Filme com o id %d nao existe\n", id);
    }
}