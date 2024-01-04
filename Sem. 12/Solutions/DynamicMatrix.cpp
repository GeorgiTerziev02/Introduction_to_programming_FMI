#include <iostream>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    // create pointers for the rows of the matrix
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        // create the cols for the row
        matrix[i] = new int[cols];

        // read the cols of the row
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // delete matrix
    for (int i = 0; i < rows; ++i) {
        // delete the cols of the row
        delete[] matrix[i];
    }
    // delete the rows
    delete[] matrix;
}