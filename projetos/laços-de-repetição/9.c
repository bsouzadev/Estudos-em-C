#include <stdio.h>

int main(){
    int x =0, soma=0, qnt=0, maior=0, menor =0;
    scanf("%d", &x);
    
    if(x > 0){
        maior = x;
        menor = x;
    } else {
        printf("Digite um numero maior que 0\n");
        return 0;
    }

    while(x > 0){
        qnt ++;
        soma += x;
        if(x < menor){
            menor = x;
        } if(x > maior){
            maior = x;
        }
        scanf("%d", &x);
    }


    printf("Quantidade de numeros digitados %d\nSoma dos numeros %d\nMaior numero digitado %d\nMenor numero digitado %d\n", qnt, soma, maior, menor);

    return 0;
}