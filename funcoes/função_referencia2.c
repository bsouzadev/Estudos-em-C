#include <stdio.h>

int *troca_o_valor(int *a){
    *a = 100;  // Modifica o conteúdo apontado por a
    return a;  // Retorna o mesmo ponteiro
}

int main(){
    int a = 10;
    int *resultado = troca_o_valor(&a);  // passa o endereço de a
    printf("%d\n", *resultado);   // imprime o valor que está no endereço retornado
    return 0;
}