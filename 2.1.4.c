//Harshit patil 25070521104




#include <stdio.h>

int main() {
    int m, n;
    int matrix[10][10];
    int i, j, isLower = 1;

    // Input rows and columns
    printf("Enter no of rows, columns: ");
    scanf("%d %d", &m, &n);

    // Check for square matrix
    if (m != n) {
        printf("Enter elements of matrix:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        printf("Matrix must be square matrix\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if lower triangular
    for (i = 0; i < m; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                isLower = 0;
                break;
            }
        }
    }

    // Output result
    if (isLower)
        printf("Lower triangular matrix\n");
    else
        printf("Not a lower triangular matrix\n");

    return 0;
}



