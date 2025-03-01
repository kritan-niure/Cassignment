#include <stdio.h>
int palindrome(int n);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (palindrome(num))
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");
    
    return 0;
}

int palindrome(int n) {
    int rev = 0, temp = n, remainder;

    while (n > 0) {
        remainder = n % 10;  
        rev = rev * 10 + remainder; 
        n /= 10; 
    }

    return (temp == rev); 
}

