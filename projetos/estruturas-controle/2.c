#include <stdio.h>

int main(){
    int n1 =0, n2=0;
    scanf("%d %d", &n1,&n2);
    if(n1 > n2){
        printf("Maior = %d\n", n1);
    } else if(n2 > n1){
        printf("Maior = %d\n", n2);
    } else{
        printf("Numeros iguais\n");
    }
    return 0;
}