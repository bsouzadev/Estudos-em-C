#include <stdio.h>

int eh_triangulo(int a, int b, int c){
    if(a < b + c && b < a + c && c < a + b){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int a=0,b=0,c=0;
    scanf("%d %d %d", &a,&b,&c);
    if(a <= 0 || b <= 0 || c <= 0){
        return 0;
    }
    int resultado = eh_triangulo(a,b,c);
    printf("%d\n", resultado);
}