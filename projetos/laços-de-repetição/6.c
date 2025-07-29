#include <stdio.h>

int main(){
    int n=0, fat=1;
    scanf("%d", &n);
    for(int i =n; i>0;i--){
        fat *= i;
    }

    printf("O fatorial de %d eh %d\n", n,fat);
    return 0;
}