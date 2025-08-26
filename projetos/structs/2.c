#include <stdio.h>
#include <math.h>

struct coordenada{
  float x;
  float y;
};

double distancia(struct coordenada x, struct coordenada y);

int main(){
    struct coordenada x, y;
    scanf("%f %f", &x.x,&x.y);
    scanf("%f %f", &y.x,&y.y);
    double resultado = distancia(x,y);
    printf("%lf\n", resultado);
    return 0;
}

double distancia(struct coordenada x, struct coordenada y){
    return sqrt((pow(y.x - x.x, 2) + pow(y.y - x.y, 2))); //ja faz a conta e retorna um double.
}