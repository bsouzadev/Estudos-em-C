#include <stdio.h>

// Função que recebe dois inteiros e retorna a soma deles
int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    // Chama a função soma e guarda o resultado
    resultado = soma(x, y);

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
