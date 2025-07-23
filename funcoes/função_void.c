#include <stdio.h>

// função void que recebe dois inteiros. A função não retorna nada.
void soma(int a, int b){
    int soma = a + b;
    printf("%d\n", soma);
}

int main(){
    int a =2;
    int b =3;
    soma(a,b);
    return 0;

}