#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int media(int v[], int t);

void aleatorio(int v[], int t);

int main(){
    srand(time(NULL));
    int t =0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &t);
    int v[t];
    aleatorio(v, t);
    int resultado = media(v,t);
    printf("A media dos numeros do vetor eh: %d\n", resultado);
    return 0;
}

void aleatorio(int v[], int t){
    for(int i=0; i<t; i++){
        v[i] = rand()%100;
    }
}

int media(int v[], int t){
    int soma =0;
    for(int i =0; i<t; i++){
        soma += v[i];
    }
    return soma/t;
}