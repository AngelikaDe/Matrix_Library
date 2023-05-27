#include 's21_matrix.h'
int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int error = 0;
  if (A->rows == B->rows && A->columns == B->colums) {
    while (error = 0) {
      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          if (A->matrix[i][j] - B->matrix[i][j] < 1e-6) {
            error = 1;
          }
        }
      }
    }

  } else {
    error = 1;
  }
  return error;
}