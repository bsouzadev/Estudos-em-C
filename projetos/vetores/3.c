#include <stdio.h>

void maior(int v[], int x);

int main(){
    int t =0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &t);
    int v[t];
    for(int i=0; i<t; i++){
        scanf("%d", &v[i]);
    }
    maior(v,t);
}

void maior(int v[], int x){
    int aux = v[0], pos=0;
    for(int i=0; i<x; i++){
        if(v[i] > aux){
            aux = v[i];
            pos = i+1; // contagem humana.
        }
    }

    printf("O maior numero do meu vetor: %d\nA posicao do maior numero do meu vetor: %d\n", aux, pos);
}
