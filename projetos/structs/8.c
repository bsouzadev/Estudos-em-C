#include <stdio.h>
#include <string.h>

typedef struct cliente{
   char cpf[20];
   char nome[50];
} Cliente;

void procuraCliente(Cliente cliente[], char cpf[], int tamanho);

int main(){
   Cliente clientes[10];
   char cpf[20];
   fgets(cpf, 20, stdin);
   for(int i = 0; i < 10; i++){
       fgets(clientes[i].cpf, 20, stdin);
       fgets(clientes[i].nome, 50, stdin);
   }
   procuraCliente(clientes, cpf, 10);
   return 0;
}

void procuraCliente(Cliente cliente[], char cpf[], int tamanho){
    for(int i=0; i<tamanho; i++){
        if(strcmp(cpf, cliente[i].cpf) == 0){ //strcmp retorna 0 se as strings forem iguais.
            printf("%s", cliente[i].nome);
        }
    }
}