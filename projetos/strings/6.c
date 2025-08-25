#include <stdio.h>
#include <string.h>

void inverteString(char string[]);

int main(){
    char str[102];
    fgets(str, 102, stdin);
    inverteString(str);
    return 0;
}

void inverteString(char string[]){
    string[strcspn(string, "\n")] = '\0';
    int t = strlen(string);
    char aux[t+1];
    for(int i =t-1, j=0; i>=0; i--, j++){
        aux[j] = string[i];
    }
    aux[t] = '\0';
    printf("%s\n", aux);
}