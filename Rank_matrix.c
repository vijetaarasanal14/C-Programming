#include <stdio.h>

int rankOfMatrix(int mat[10][10], int r, int c) {
    int rank = c;

    for (int row = 0; row < rank; row++) {
        // If diagonal element is not zero
        if (mat[row][row] != 0) {
            for (int col = 0; col < r; col++) {
                if (col != row) {
                    float mult = (float)mat[col][row] / mat[row][row];
                    for (int i = 0; i < rank; i++) {
                        mat[col][i] -= mult * mat[row][i];
                    }
                }
            }
        }
        else {
            // Find a non-zero element below
            int reduce = 1;
            for (int i = row + 1; i < r; i++) {
                if (mat[i][row] != 0) {
                    for (int j = 0; j < rank; j++) {
                        int temp = mat[row][j];
                        mat[row][j] = mat[i][j];
                        mat[i][j] = temp;
                    }
                    reduce = 0;
                    break;
                }
            }

            if (reduce) {
                rank--;
                for (int i = 0; i < r; i++) {
                    mat[i][row] = mat[i][rank];
                }
                row--;
            }
        }
    }

    return rank;
}

int main() {
    int r, c;
    int mat[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    int rank = rankOfMatrix(mat, r, c);

    printf("Rank of the matrix = %d\n", rank);

    return 0;
}
