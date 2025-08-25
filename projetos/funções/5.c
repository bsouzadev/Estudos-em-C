#include <stdio.h>

int soma_algarismos(int x);

int main(){
    int x =0;
    scanf("%d", &x);
    if(x < 0){
        return -1;
    }

    int resultado = soma_algarismos(x);
    printf("A soma do algarismo eh: %d\n", resultado);
    return 0;
}


int soma_algarismos(int x){
    int soma = 0;
    soma += (((((x%10)/10)%10)/10)%10)/10;
    return soma;
}