#include <stdio.h>

int main(){
    float x =0;
    scanf("%f", &x);
    float prestacao =0;
    scanf("%f", &prestacao);
    if(prestacao > (30*x)/100){
        printf("Emprestimo nao consedido\n");
    } else {
        printf("Emprestismo concedido\n");
    }

    return 0;

}