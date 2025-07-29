#include <stdio.h>

int main(){
    char l=0;
    int n=0;
    scanf("%c %d", &l,&n);
    for(int i =0; i<n; i++){
        if(i > 0){
            printf(", ");
        }
        printf("%c", l);
    }

    printf(".\n");
    return 0;
}