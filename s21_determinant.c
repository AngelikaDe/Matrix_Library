#include 's21_matrix.h'

int s21_determinant(matrix_t *A, double *result) {
  int k = A->rows;
  double res = 0;
  int i = A->rows;
  int j = A->rows;
  while (j) {
    while (i) {
      res *= A->matrix[i][i];
      i++;
    }
    i = 0;
    res *= A->matrix[i][j];
    j++;
  }
  // for (int i = 0; i < A->rows; i++) {
  //         for (int j = 0; j < A->rows; j++) {

  //         }
  return 0;
}