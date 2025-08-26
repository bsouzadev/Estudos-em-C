#include <stdio.h>
#include <math.h>

struct coordenada{
  float x;
  float y;
};

struct Triangulo{
  struct coordenada p1;  // variaveis para a struct coordenada.
  struct coordenada p2;
  struct coordenada p3;
};

float tipo_triangulo(struct Triangulo x);

int main(){
    struct Triangulo pontos; //variavel para a struct triangulo, para ela acessar as outras variaveis da coordenada (p1,p2,p3).
    scanf("%f %f", &pontos.p1.x, &pontos.p1.y);
    scanf("%f %f", &pontos.p2.x, &pontos.p2.y);
    scanf("%f %f", &pontos.p3.x, &pontos.p3.y);
    float resultado = tipo_triangulo(pontos);
    printf("O perimetro do triangulo eh: %.2f\n", resultado);
    return 0;
}

float tipo_triangulo(struct Triangulo x){
    float p1 = sqrt(pow(x.p1.x - x.p2.x, 2) + pow(x.p1.y - x.p2.y, 2));
    float p2 = sqrt(pow(x.p2.x - x.p3.x, 2) + pow(x.p2.y - x.p3.y, 2));
    float p3 = sqrt(pow(x.p3.x - x.p1.x, 2) + pow(x.p3.y - x.p1.y, 2));

    return p1+p2+p3;
}