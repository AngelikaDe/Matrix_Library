#include 's21_matrix.h'

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int errorr = 0;
  for (int i = 0; i < result->rows; i++) {
    for (int j = 0; j < result->columns; j++) {
      for (int k = 1; k < result->rows; k++) {
        result->matrix[i][j] = A->matrix[i][j] * B->matrix[i][j] +
                               A->matrix[i][k] * B->matrix[k][j];
      }
    }
  }
}