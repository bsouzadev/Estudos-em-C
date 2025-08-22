#include <stdio.h>

int posicao (int v[], int n, int val);

int main(){
    int t=0, val=0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &t);
    int v[t];
    for(int i =0; i<t; i++){
        scanf("%d", &v[i]);
    }
    printf("Digite o numero que voce deseja saber a posicao no vetor:\n");
    scanf("%d", &val);
    int resultado = posicao(v,t,val);
    if(resultado == -1){
        printf("Esse numero nao esta no vetor, tente novamente\n");
    } else{
        printf("A posicao desse numero eh: %d\n", resultado);
    }

    return 0;
}

int posicao (int v[], int n, int val){
    for(int i =0; i<n; i++){
        if(v[i] == val){
            return i+1;
        }
    }

    return -1;
}