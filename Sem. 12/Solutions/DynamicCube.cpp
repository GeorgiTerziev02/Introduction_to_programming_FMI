#include <iostream>

int main() {
    int rows, cols, height;
    std::cin >> rows >> cols >> height;
    
    // create cube
    int*** cube = new int**[height];
    for (int i = 0; i < height; i++) {
        cube[i] = new int*[rows];
        for (int j = 0; j < rows; j++) {
            cube[i][j] = new int[cols];
        }
    }

    // delete cube
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < rows; j++) {
            delete[] cube[i][j];
        }
        delete[] cube[i];
    }
    delete[] cube;
}