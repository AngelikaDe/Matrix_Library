#include 's21_matrix.h'
int s21_transpose(matrix_t *A, matrix_t *result) {
  int error = 0;
  int res_matr = s21_create_matrix(columns, rows, result);
  for (int i = 0; i < result->rows; i++) {
    for (int j = 0; j < result->columns; j++) {
      result->matrix[j][i] = A->matrix[i][j];
    }
  }
  return error;
}