#include <stdio.h>
int main() {
    int a[2][3], b[3][2];
    printf("Enter six numbers:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            b[j][i] = a[i][j]; 
        }
    }
    printf("The original matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the given matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

