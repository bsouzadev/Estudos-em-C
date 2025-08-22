#include <stdio.h> 

float converte(float f){
    float grauC = ((f - 32.0) * (5.0/9.0));
    return grauC;
}

int main(){
    float f=0;
    scanf("%f", &f);
    float graus = converte(f);
    printf("A temperatura em Graus eh: %.1f\n", graus);
    return 0;
}