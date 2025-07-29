#include <stdio.h>

int main(){
    int x =0, soma =0;
    scanf("%d", &x);
    for(int i =1; i < x; i++){
        if(x%i == 0){
            soma += i;
        }
    }

    printf("Soma = %d\n", soma);
    return 0;
}