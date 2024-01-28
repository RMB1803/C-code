#include <stdio.h>

int main() {
    //READING A MATRIX AND PRINTING IT.

    int a[2][3];
    int sum = 0;
    printf("Enter elements of a matrix: ");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("Sum = %d", sum);
}