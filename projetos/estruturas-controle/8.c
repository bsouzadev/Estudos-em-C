#include <stdio.h>

int main(){
    float x =0, parte_fracionaria=0, resultado=0;
    int parte_inteira =0;
    scanf("%f", &x);
    parte_inteira = (int)x;
    parte_fracionaria = x - parte_inteira;
    if(parte_fracionaria < 0.25){
        parte_fracionaria = 0;
    } else if(parte_fracionaria >= 0.25 && parte_fracionaria < 0.75){
        parte_fracionaria = 0.5;
    } else if(parte_fracionaria >= 0.75){
        parte_fracionaria =0;
        parte_inteira += 1;
    }
    resultado = parte_inteira + parte_fracionaria; //importante deixar em uma variavel a resposta.

    printf("%.1f", resultado);
    return 0;
    
}