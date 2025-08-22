#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, 100, stdin); // le a string.
    str[strcspn(str, "\n")] = '\0'; // tira o \n.
    int t = strlen(str); // pega o tamanho da string.
    char str2 [t+1]; // cria a nova string.
    
    for(int i =t-1, k=0; i >= 0; i--, k++){
        str2[k] = str[i];
    }
    str2[t] = '\0';
    printf("%s", str2);
    
}