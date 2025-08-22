#include <stdio.h>
#include <string.h>

void copiaString(char string1[], char string2[]);

int main(){
    char str1[102], str2[102];
    fgets(str1, 102, stdin);
    fgets(str2, 102, stdin);
    copiaString(str1, str2);
    printf("%s", str1);
    return 0;
}

void copiaString(char string1[], char string2[]){
    strcpy(string1, string2);
} 