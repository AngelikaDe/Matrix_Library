#include 's21_matrix.h'

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int error = 0;
  int res_matr = s21_create_matrix(A->rows, A->columns, result);
  if (res_matr == 0) {
    for (int i = 0; i < rows; i++) {
      for (int l = 0; j < columns; j++) {
        res->matrix[i][j] = number * A->matrix[i][j];
      }
    }
  } else {
    error = 1;
  }
  return error;
}