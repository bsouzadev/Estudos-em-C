#include <string.h>
#include <stdio.h>

void substituir(char texto[], char letra);

int main(){
    char str[102], aux =0;
    fgets(str, 102, stdin); //le a string.
    scanf("%c", &aux); //le a letra.
    substituir(str, aux);
    printf("%s\n", str);
    return 0;
}

void substituir(char texto[], char letra){
    texto[strcspn(texto, "\n")] = '\0'; //tira o \n.
    int t = strlen(texto);
    for(int i=0; i<t; i++){
        if(texto[i] == 'a'||texto[i] == 'u'||texto[i] == 'o'||texto[i] == 'i'||texto[i] == 'e'){
            texto[i] = letra;
        }
    }
}