#include <stdio.h>

int main() {
    // TRANSPOSE OF A MATRIX.

    int b[2][3];
    printf("Enter elements of a matrix: \n");
    for(int i = 0; i<2; i++) { // rows=2
        for(int j = 0; j<3; j++) { // columns=3
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix is: \n");
    for(int i = 0; i<2; i++) { // rows=2
        for(int j = 0; j<3; j++) { // columns=3
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix: \n");
    for(int i = 0; i<3; i++) {  // rows are now 3. 
        for(int j = 0; j<2; j++) { // columns are now 2.
            printf("%d\t", b[j][i]); // swapping rows and columns
        }
        printf("\n");
    }
}