#include <stdio.h>

char maiusculo(char x);

int main(){
    char l =0;
    scanf("%c", &l);
    char resultado = maiusculo(l);
    printf(" %c\n", resultado);
    return 0;
}

char maiusculo(char x){
    if(x >= 97 && x <= 122){
        x -= 32;
        return x;
    } else if (x >= 65 && x <= 90){
        return x;
    } else{
        printf("Nao eh letra ");
        return x;
    }
}