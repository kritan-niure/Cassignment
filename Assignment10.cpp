#include <stdio.h>
int main() {
    int m, sum = 0;
    printf("Enter the number of rows for a square matrix: ");
    scanf("%d", &m);
    int a[m][m];
    printf("Enter the numbers:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        sum += a[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}

