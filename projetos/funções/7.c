#include <stdio.h>

void exclamacao(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
}

int main(){
    int x = 0;
    scanf("%d", &x);
    exclamacao(x);
    return 0;
}