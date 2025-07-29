#include <stdio.h>

int main(){
    int idade=0;
    scanf("%d", &idade);
    if(idade >= 10 && idade <= 14){
        printf("Infantil\n");
    } else if(idade >= 15 && idade <= 17){
        printf("Juvenil\n");
    } else if(idade >= 18 && idade <= 50){
        printf("Adulto");
    } else if (idade >= 51){
        printf("Idoso\n");
    }

    return 0;
}