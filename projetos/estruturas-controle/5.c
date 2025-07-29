#include <stdio.h>
#include <math.h>

int main(){
    int lado=0;
    float area=0,medida=0;
    scanf("%d", &lado);
    scanf("%f", &medida);
    if(lado < 2 || lado > 5){
        printf("Numeros de lados invalidos\n");
    } else if (lado == 3){
        area = ((medida*medida) * sqrt(3)) / 4;
        printf("TRIANGULO, valor da area = %f\n", area); 
    } else if (lado == 4){
        area = medida*medida;
        printf("QUADRADO, valor da area = %f\n", area); 
    } else if (lado == 5){
        printf("PENTAGONO\n"); 
    }

    return 0;
}