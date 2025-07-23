#include <stdio.h>

//funçao void não retorna nada. 
void troca_o_valor(int *x){
    *x = 20; //modifica o conteudo apontado por x.
}

int main(){
    int a = 10;
    troca_os_valores(&a);
    printf("%d\n", a); //novo valor de x que será 20.
    return 0;
}