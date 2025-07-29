#include <stdio.h> 

int main(){
    int senha=0;
    scanf("%d", &senha);
    while(senha != 54321){
        printf("Acesso negado\n");
        scanf("%d", &senha);
    }

    printf("Acesso permitido\n");
    return 0;
}