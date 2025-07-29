#include <stdio.h>

int main(){
    int numero =0;
    scanf("%d", &numero);
    if(numero == 1){
        printf("Domingo\n");
    } else if(numero == 2){
        printf("Segunda\n");
    }else if(numero == 3){
        printf("Terca\n");
    }else if(numero == 4){
        printf("Quarta\n");
    }else if(numero == 5){
        printf("Quinta\n");
    }else if(numero == 6){
        printf("Sexta\n");
    } else {
        printf("Sabado\n");
    }

    return 0;
}