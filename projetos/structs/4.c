#include <stdio.h>

struct n_complexo{
    double real;
    double imaginario;
};


struct n_complexo soma(struct n_complexo n1, struct n_complexo n2);

int main(){
    struct n_complexo n1,n2; //variaveis da struct n_complexos.
    scanf("%lf %lf", &n1.real,&n1.imaginario);
    scanf("%lf %lf", &n2.real,&n2.imaginario);
    struct n_complexo resultado = soma(n1,n2);  //minha função irá retornar uma struct n_complexo, então é nescessario fazer uma variavel para
                                                //esse resultado.
    printf("Soma parte real: %lf\nSoma parte imaginaria: %lf\n", resultado.real,resultado.imaginario);
    return 0; 
}

struct n_complexo soma(struct n_complexo n1, struct n_complexo n2){
    struct n_complexo resultado; //fazendo a nova variavel (dentro da struct n_complexo) para armazenar o resultado da operação.
    resultado.real = n1.real + n2.real; //fazendo a operação normalmente.
    resultado.imaginario = n1.imaginario + n2.imaginario; //fazendo a operação normalmente.
    return resultado; //retornando a minha variavel resultado (que está dentro da minha struct). (Ela irá voltar para a main com os atributos .real e, .imaginario, pois ela é uma variavél dentro de n_complexo que possui esses campos imaginarios e reais).
    //a variavel resultado que está dentro da minha struc n_complexo, irá para a minha variavel que eu fiz na main, a variavel resultado.
}
