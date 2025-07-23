#include <stdio.h>

int main() {
    int var = 10;        // Variável inteira
    int *ptr = &var;     // Ponteiro que guarda o endereço de 'var'

    printf("Valor de var: %d\n", var);            // Imprime o valor da variável
    printf("Endereco de var: %p\n", &var);        // Imprime o endereço da variável
    printf("Valor do ponteiro ptr (endereco de var): %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr); // Imprime o valor guardado no endereço apontado por ptr

    // Alterando o valor de var via ponteiro
    *ptr = 20;
    printf("Novo valor de var apos alteracao pelo ponteiro: %d\n", var);

    return 0;
}
