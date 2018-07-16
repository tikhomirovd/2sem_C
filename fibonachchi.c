#include <stdio.h>


int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int check(int n){
    while (n < 0) {
        printf("Input positive number");
        scanf("%d", &n);
    }
    return n;
}

int main() {
    int n;
    printf("Input number \n");
    scanf("%d", &n);
    n = check(n);
    int nfib = fib(n);
    printf("F(%d)=%d", n, nfib);
    return 0;
}