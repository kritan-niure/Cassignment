#include <stdio.h>
int main() {
    int m, n, sum = 0;
    printf("Enter the total number of rows for the matrix: ");
    scanf("%d", &m);
    printf("Enter the total number of columns for the matrix: ");
    scanf("%d", &n);
    int a[m][n]; 
    printf("Enter the numbers:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    printf("Sum of elements of the given matrix: %d\n", sum);
    return 0;
}

