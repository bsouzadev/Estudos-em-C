#include <stdio.h>

int main(){
    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];
    a[4] = 100;
    for(int i=0; i<6; i++){
        printf("%d\n", a[i]);
    }
    printf("Soma das posicoes: %d\n", soma);
    return 0;
}
