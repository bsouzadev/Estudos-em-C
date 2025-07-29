#include <stdio.h>

int main() {
    int i = 1; // Inicializa a variável de controle

    // Executa o bloco pelo menos uma vez
    do {
        // Imprime o valor atual de i
        printf("do while: %d\n", i);
        i++; // Incrementa i
    } while (i <= 5); // Verifica a condição no final

    return 0;
}
