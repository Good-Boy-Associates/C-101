#include <stdio.h>

int main() {
    int num_rows, num_cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &num_rows);
    printf("Enter the number of columns: ");
    scanf("%d", &num_cols);

    int matrix[num_rows][num_cols];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int num_non_zeros = 0;

    // Count the number of non-zero elements
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (matrix[i][j] != 0) {
                num_non_zeros++;
            }
        }
    }

    // Print the number of rows, columns, and non-zero elements as the first row
    printf("%d %d %d\n", num_rows, num_cols, num_non_zeros);

    // Print the non-zero elements in row-major order
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (matrix[i][j] != 0) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}
