/**
 * @brief Performs a naive implementation of a matrix-transpose algorithm
 *
 * @author Marco Franzon
 * @date 06/05/21
 */

#include <iomanip>
#include <iostream>
#include <array>


template <typename T>
void print_matrix (T matrix, int row, int col){

  /*!
   * Prints the content of a matrix
   *
   * @param matrix the matrix to be printed
   * @param row number of rows of the matrix
   * @param col number of columns of the matrix
   * @return none
   */

  for (int i{0}; i<row; i++){
    for (int j{0}; j<col; j++)
      std::cout << std::setw(2) << matrix[i * col + j] << " ";
    std::cout << std::endl;
  }
}


template <typename T>
T transp_matrix (T matrix, int row, int col){

  /*!
   * Naive tranposition of a matrix
   *
   * @param matrix the matrix to be transposed
   * @param row number of rows of the matrix
   * @param col number of columns of the matrix
   * @return tr_matrix the transposed matrix
   */

  T tr_matrix;
  for (int i{0}; i<row; i++){
    for (int j{0}; j<col; j++)
      tr_matrix[j * row + i] = matrix[i * col + j];
  }
  return tr_matrix;
}



template <typename T>
void print_matrix (T matrix, int row, int col);


template <typename T>
T transp_matrix (T matrix, int row, int col);


int main(){

  const int row = 3, col = 7;
  const int N = row * col;

  std::array<double, N> matrix;

  for (int i{0}; i<N; i++) { //the array is filled with numbers
    matrix[i] = double(i);
  }

  std::cout << "Original matrix" << std::endl;
  print_matrix(matrix, row, col);

  matrix = transp_matrix(matrix, row, col);

  std::cout << "Transposed matrix" << std::endl;
  print_matrix(matrix, col, row);

}
