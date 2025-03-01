#include <stdio.h>
int main() {
    int a[3][2];
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] % 2 == 1) {
                sum += a[i][j];
            }
        }
    }
    printf("Sum of odd elements: %d\n", sum);
    return 0;
}

