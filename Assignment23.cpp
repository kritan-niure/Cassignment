#include <stdio.h>

int fibo(int n);

int main() {
    int n, a;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Fibonacci series: \n");
        for (int i = 0; i < n; i++) {
            a = fibo(i);
            printf("%d\t", a);
        }
        printf("\n");
    }

    return 0;
}

int fibo(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibo(n - 1) + fibo(n - 2); 
    }
}

