#include <stdio.h>
#define N 50

int main() {
    int a[N][N], b[N][N], c[N][N], m, n, p, q, sum;

    printf("Enter rows and columns for first matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter first matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: \n");
    scanf("%d %d", &p, &q);
    printf("Enter second matrix: \n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The first matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix: \n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    if(n!=p) {
        printf("Cannot multiply!");
    }
    else{
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                sum = 0;
                for(int k = 0; k < n; k++) {
                    sum += a[i][k]*b[k][j];
                }
                c[i][j] = sum;
            }
        }
    }

    printf("The multiplication matrix is: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}