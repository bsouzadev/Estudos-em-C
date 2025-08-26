#include <stdio.h>

struct livro{
    int ISBN;
    int ano;
    double preco;
};

typedef struct livro Livro;

Livro retornaLivroMaisCaro(Livro l1, Livro l2);

int main(){
    Livro n1,n2,resultado;
    scanf("%d %d %lf", &n1.ISBN,&n1.ano,&n1.preco);
    scanf("%d %d %lf", &n2.ISBN,&n2.ano,&n2.preco);
    resultado = retornaLivroMaisCaro(n1,n2);
    printf("%d %d %.2lf\n",resultado.ISBN, resultado.ano, resultado.preco);
    return 0;
}

Livro retornaLivroMaisCaro(Livro l1, Livro l2){
    if(l1.preco > l2.preco){
        return l1;
    } else if(l2.preco > l1.preco){
        return l2;
    } else {
        return l1;
    }
}