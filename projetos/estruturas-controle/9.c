#include <stdio.h>

int main(){
    char a,b,c,d,e,f,g;
    scanf("%c%c%c%c%c%c%c", &a,&b,&c,&d,&e,&f,&g);
    if(a == g && b == f && c == e){
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}