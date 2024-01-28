#include <stdio.h>

int main() {
    int a[3][3];
    int sumR, sumC;

    printf("Enter the elements of matrix: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        sumR = 0;
        sumC = 0;
        for(int j = 0; j < 3; j++) {
            sumR += a[i][j];
            sumC += a[j][i];
        }
        printf("Sum of row %d = %d\t Sum of column %d = %d\n", i+1, sumR, i+1, sumC);
    }
}