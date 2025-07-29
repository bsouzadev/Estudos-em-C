#include <stdio.h>
#include <math.h>

int main(){
    float peso =0, altura=0, imc=0;
    scanf("%f %f", &peso,&altura);
    imc = (peso/pow(altura, 2));
    if(imc < 18.5){
        printf("Abaixo do peso\n");
    } else if(imc >= 18.6 && imc <= 24.9){
        printf("Saudavel\n");
    } else if(imc >= 25.0 && imc <= 29.9){
        printf("Peso em excesso\n");
    } else if(imc >= 30.0 && imc <= 34.9){
        printf("Obesidade grau I\n");
    } else if(imc >= 35.0 && imc <= 39.9){
        printf("Obesidade grau II (severa)\n");
    } else {
        printf("Obesidade grau III (morbida)\n");
    }

    return 0;
       
}