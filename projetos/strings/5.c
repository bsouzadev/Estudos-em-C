#include <string.h>
#include <stdio.h>

void imprimeSubstring(char S[], int i, int j);

int main(){
    char str[102];
    fgets(str, 102, stdin);
    int x=0,y=0;
    scanf(" %d %d", &x,&y);
    imprimeSubstring(str, x, y);
    return 0;
}

void imprimeSubstring(char S[], int i, int j){
    S[strcspn(S, "\n")] = '\0';
    for(int x=i; x<=j; x++){
        printf("%c", S[x]);
    }
}