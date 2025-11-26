#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // You can increase these limits if needed
    int A[10][10], B[10][10], Sum[10][10], Prod[10][10];
    int r, c, i, j, k;

    // Input dimensions for the first matrix
    printf("Enter number of rows for matrices (r): ");
    if (scanf("%d", &r) != 1) return 1;
    printf("Enter number of columns for matrices (c): ");
    if (scanf("%d", &c) != 1) return 1;

    // Read first matrix A (r x c)
    printf("Enter elements of matrix A (%d x %d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (scanf("%d", &A[i][j]) != 1) return 1;
        }
    }

    // Read second matrix B (r x c) for addition
    printf("Enter elements of matrix B (%d x %d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (scanf("%d", &B[i][j]) != 1) return 1;
        }
    }

    // Compute Sum = A + B (r x c)
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print Sum
    printf("Sum (A + B) - (%d x %d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    // For multiplication, B must be compatible: A is r x c, so B must be c x q
    int q;
    printf("Enter inner dimension for multiplication (B will be treated as %d x q): ", c);
    if (scanf("%d", &q) != 1) return 1;

    // Read second matrix for multiplication: B2 is c x q
    int B2[10][10];
    printf("Enter elements of matrix B (multiplication) (%d x %d):\n", c, q);
    for (i = 0; i < c; i++) {
        for (j = 0; j < q; j++) {
            if (scanf("%d", &B2[i][j]) != 1) return 1;
        }
    }

    // Initialize Prod to zero (r x q)
    for (i = 0; i < r; i++) {
        for (j = 0; j < q; j++) {
            Prod[i][j] = 0;
        }
    }

    // Compute Prod = A * B2
    for (i = 0; i < r; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < c; k++) {
                Prod[i][j] += A[i][k] * B2[k][j];
            }
        }
    }

    // Print Product
    printf("Product (A * B) - (%d x %d):\n", r, q);
    for (i = 0; i < r; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", Prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}

