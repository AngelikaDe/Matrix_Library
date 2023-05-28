# Matrix Library
Library for processing numerical matrices in the C programming language.

## Matrix structure in C language:
    ``` typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t; 
```

## Matrix operations
* Creating matrices (create_matrix)
* Matrix comparison (eq_matrix)
    ` The matrices A, B are equal |A = B| if they have the same dimensions and the corresponding elements are identical, thus for all i and j: A(i,j) = B(i,j)

The comparison must be up to and including 7 decimal places. 
`
* Adding (sum_matrix) and subtracting matrices (sub_matrix)
    ```            1 2 3   1 0 0   2 2 3
С = A + B = 0 4 5 + 2 0 0 = 2 4 5
            0 0 6   3 4 1   3 4 7 
            ```
* Matrix multiplication by scalar (mult_number). Multiplication of two matrices (mult_matrix)
    ```                1 2 3   2 4 6   
B = 2 × A = 2 × 0 4 2 = 0 8 4 
                2 3 4   4 6 8 ```
* Matrix transpose (transpose)
`The transpose of matrix A is in switching its rows with its columns with their numbers retained`

    ```         1 4   1 2 3
A = A^T = 2 5 = 4 5 6
          3 6 
```
* Inverse of the matrix (inverse_matrix)