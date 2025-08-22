#include <string.h>
#include <stdio.h>

int contaVogais(char texto[]);

int main(){
    char str[102];
    fgets(str, 102, stdin); //lendo a string.
    int resultado = contaVogais(str);
    printf("O numero de vogais dessa string eh: %d\n", resultado);
    return 0;
}

int contaVogais(char texto[]){
    int contador =0;
    //tirando o \n da string.
    texto[strcspn(texto, "\n")] = '\0';
    int tamanho = strlen(texto); //armazenando o tamanho da minha string.
    for(int i=0; i<tamanho; i++){
        if(texto[i] == 'a' ||texto[i] == 'e' ||texto[i] == 'i' ||texto[i] == 'o' ||texto[i] == 'u'){
            contador++;
        }
    }

    return contador;
}