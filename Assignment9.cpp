#include <stdio.h>
int main() {
    int a[2][3], sum;
    printf("Enter six numbers:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Computing the sum of elements of each row:\n");
    for (int i = 0; i < 2; i++) {
        sum = 0; 
        for (int j = 0; j < 3; j++) {
            sum += a[i][j]; 
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}

