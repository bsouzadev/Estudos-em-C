#include <stdio.h>

struct Filme{
   int id;
   int duracao;
   int ano;
};

void procurando_o_filme(struct Filme filmes[], int t, struct Filme filme); //função para procurar o filme.

int main(){
    int t =0;
    scanf("%d", &t);
    struct Filme filmes[t], filme_desejado;
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &filmes[i].id, &filmes[i].duracao, &filmes[i].ano);
    }
    scanf("%d %d", &filme_desejado.duracao, &filme_desejado.ano);
    procurando_o_filme(filmes, t, filme_desejado);
    return 0;

}

void procurando_o_filme(struct Filme filmes[], int t, struct Filme filme){
    for(int i=0; i<t; i++){
        if(filmes[i].duracao == filme.duracao && filmes[i].ano == filme.ano){
            printf("%d\n", filmes[i].id);
        }
    }
}