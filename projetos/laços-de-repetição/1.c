#include <stdio.h>

int main(){
    int cont =0;
    for(int i =1; i <= 1000; i++){
        if(i%7 == 0){
            cont ++;
        }
    }

    printf("A quantidade de numeros divisiveis por 7 no intervalo de 1 a 100 eh %d\n", cont);
    return 0;
}