#include <stdio.h>

int main() {
    int n;
    int fib0 = 0, fib1 = 1, fibn;
    
    printf("Digite o valor de n (termo da sequencia Fibonacci): ");
    scanf("%d", &n);

    if (n == 0) {
        fibn = 0;
    } else if (n == 1) {
        fibn = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            fibn = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibn;
        }
    }

    printf("O termo de ordem %d da sequencia Fibonacci eh: %d\n", n, fibn);

    return 0;
}
