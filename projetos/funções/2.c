#include <stdio.h>
#include <math.h> 

float volume_esfera(float x){
    float v = (4.0/3.0) * 3.14159 * pow(x, 3);
    return v;
}

int main(){
    float raio=0;
    scanf("%f", &raio);
    float volume = volume_esfera(raio);
    printf("O volume da esfera eh: %.1f\n", volume);
    return 0;
}