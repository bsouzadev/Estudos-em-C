#include <stdio.h>

int soma(int x, int y);

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	int resultado = soma(x,y);
	printf("%d\n", resultado);
	return 0;
}

int soma(int x, int y){
    int soma =0;
    for(int i =x; i <= y; i++){
        soma += i;
    }

    return soma;
}