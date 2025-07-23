#include <stdio.h> 

int main() {
    int idade;  

    printf("Digite sua idade: "); 
    scanf("%d", &idade);

    // Verifica a faixa etária usando estruturas condicionais
    if (idade < 12) {
        printf("Criança\n");  // Se idade for menor que 12, imprime "Criança", se for falso irá para o else if.
    } else if (idade <= 17) {
        printf("Adolescente\n");  // Se idade entre 12 e 17, imprime "Adolescente", se for falso irá para o else if.
    } else if (idade <= 59) {
        printf("Adulto\n");  // Se idade entre 18 e 59, imprime "Adulto", se for falso irá para o else.
    } else {
        printf("Idoso\n");  // Se idade 60 ou mais, imprime "Idoso", entrará nessa condição se todas acima forem falsas.
    }

    return 0;
}
