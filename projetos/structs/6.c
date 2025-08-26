#include <stdio.h>

struct carro{
    double preco;
    int ano;
    char categoria;
};

struct carro ano_mais_recente(struct carro c1, struct carro c2); //função para retornar o carro com o ano mais novo.

int main(){
	struct carro c1, c2, resultado; //variaveis para a struct carro.
	scanf("%lf %d %c", &c1.preco, &c1.ano, &c1.categoria);
    scanf("%lf %d %c", &c2.preco, &c2.ano, &c2.categoria);
    resultado = ano_mais_recente(c1,c2);
    printf("%.2lf %c\n", resultado.preco, resultado.categoria);
	return 0;
}

struct carro ano_mais_recente(struct carro c1, struct carro c2){
    if(c1.ano < c2.ano){
        return c2; // retornando a variavel da struct.
    } else {
        return c1;
    }
}
