#include <stdio.h>

void zeraNegativos(int v[], int n);

int main(){
    int v[6] = {1, -4, 10, 2, 0, -3};
    printf("Imprimindo o valor do vetor sem mudar os numeros:\n");
    for(int i =0; i<6; i++){
        printf("%d", v[i]);
    }
    printf("\n");
    zeraNegativos(v, 6);
    printf("Imprimindo o valor do vetor com os numeros mudados:\n");
    for(int i =0; i<6; i++){
        printf("%d", v[i]);
    }
    return 0;    
}

void zeraNegativos(int v[], int n){
    for(int i=0; i<n; i++){
        if(v[i] < 0){
            v[i] = 0;
        }
    }
}