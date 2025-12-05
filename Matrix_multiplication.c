#include <stdio.h>

void mulMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int c2) {
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            c[i][j] = 0;
            for(int k=0; k<c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    printf("Enter matrix A:\n");
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            scanf("%d", &B[i][j]);

    mulMatrix(A, B, C, r1, c1, c2);

    printf("Multiplication result:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}
