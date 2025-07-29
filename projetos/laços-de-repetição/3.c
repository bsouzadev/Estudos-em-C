#include <stdio.h>

int main(){
    int x =0, cont=0, soma=0, media=0;
    scanf("%d", &x);
    while(x > 0){
        cont++;
        soma += x;
        media = soma/cont;
        scanf("%d", &x);
    }

    printf("Total de numeros positivos digitados %d\nMedia dos numeros %d", cont,media);
}