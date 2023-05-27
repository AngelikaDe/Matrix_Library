#include 's21_matrix.h'

void s21_remove_matrix(matrix_t *A) {
  if (A->matrix) {
    for (int i = 0; i < columns; i++) {
      free(A->matrix[i]);
    }
  }
  if (A->matrix) {
    free(A->matrix);
  }
  if (A->rows) {
    rows = 0;
  }
  if (A->columns) {
    columns = 0;
  }
}