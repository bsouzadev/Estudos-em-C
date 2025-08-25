#include <stdio.h>
#include <stdlib.h>  
#include <time.h> 

int rolaDados(){
    int soma=0;
    for(int i =0; i<3; i++){
        soma += (rand()%6) + 1; // gera um numero de de 1 a 6. Sem o '+1' geraria um numero de 0 a 5.
    }

    return soma;
}
int main(){
    srand(time(NULL)); // inicializa o rand.
    printf("%d\n", rolaDados());
    return 0;
}