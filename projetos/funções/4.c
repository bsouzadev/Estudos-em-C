#include <stdio.h>

float operacao(float x, float y, char z){
    if(z == '+'){
        return x + y;
    } else if (z == '-'){
        return x - y;
    } else if(z == '/'){
        if(y == 0){
            printf("Erro! Divisao por 0\n");
            return 0;
        }
        return x / y;
    } else {
        return x * y;
    }
}

int main(){
    float x=0,y=0;
    char z=0;
    scanf("%f %c %f", &x,&z,&y);
    float resultado = operacao(x,y,z);
    printf("O resultado da operacao eh: %.1f\n", resultado);
    return 0;
}