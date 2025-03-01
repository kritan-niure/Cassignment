#include <stdio.h>

int fact(int n) {
    if (n == 1 || n == 0)  
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int num, f;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        f = fact(num); 
        printf("Factorial of %d is: %d\n", num, f);
    }

    return 0;
}

