#include <stdio.h>

// Define uma struct chamada Pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p1;  // Declara uma variável do tipo struct Pessoa

    // Preenchendo os dados da pessoa
    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    // Mostra os dados
    printf("Nome: %s", p1.nome);
    printf("Idade: %d\n", p1.idade);

    return 0;
}
