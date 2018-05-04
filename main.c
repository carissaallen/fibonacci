#include <stdio.h>

/* Tail recursive fibonacci program */
int fibTail(int n, int fib1, int fib2) {
    if (n <= 2)
        return fib2;
    else
        return fibTail(n - 1, fib2, fib1 + fib2);
}

int fibonacci(int n) {
    return fibTail(n, 1, 1);
}

/* Iterative solution to the fibonacci function */
int fibLoop(int n) {
    int i;
    int fib1 = 0;
    int fib2 = 1;
    int total;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (i = 2; i <= n; ++i) {
        total = fib1 + fib2;
        fib1 = fib2;
        fib2 = total;
    }
    //printf("%d", total);
    return total;
}

int main() {
    printf("Tail recursive fibonacci program: %d \n", fibonacci(10));
    printf("Iterative fibonacci program: %d \n", fibLoop(10));
    return 0;
}