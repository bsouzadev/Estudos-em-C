#include <stdio.h>

int main() {
    int i = 1; // Inicializa a variável de controle

    // Enquanto i for menor ou igual a 5, repete o bloco
    while (i <= 5) {
        // Imprime o valor atual de i
        printf("while: %d\n", i);
        i++; // Incrementa i
    }

    return 0;
}
