#include <stdio.h>

void subMatrix(int a[10][10], int b[10][10], int c[10][10], int r, int c1) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c1; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main() {
    int r, col;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter matrix A:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &B[i][j]);

    subMatrix(A, B, C, r, col);

    printf("Subtraction result:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<col; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}
