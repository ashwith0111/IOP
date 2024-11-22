#include <stdio.h>
#include <stdlib.h>
int** allocateMatrix(int rows, int cols) {
    int** matrix = (int*)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
void inputMatrix(int** matrix, int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int** multiplyMatrices(int** mat1, int r1, int c1, int** mat2, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return NULL;
    }

    int** product = allocateMatrix(r1, c2);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return product;
}
int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    int** mat1 = allocateMatrix(r1, c1);
    int** mat2 = allocateMatrix(r2, c2);
    printf("Matrix 1:\n");
    inputMatrix(mat1, r1, c1);
    printf("Matrix 2:\n");
    inputMatrix(mat2, r2, c2);
    int** product = multiplyMatrices(mat1, r1, c1, mat2, r2, c2);
    if (product != NULL) {
        printf("Product of the matrices:\n");
        printMatrix(product, r1, c2);
        freeMatrix(product, r1);
    }
    freeMatrix(mat1, r1);
    freeMatrix(mat2, r2);
}
