// Stolen from Angel Dimitriev and refactored a bit
// https://github.com/Angeld55/Introduction_to_programming_FMI/blob/main/Sem.%2009/linearEquationsSolver.cpp

#include <iostream>

void printArr(double arr[], unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void printMatrix(double arr[][3], unsigned rows, unsigned colls) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j< colls;j ++) {
			std::cout << arr[i][j]<< " ";
		}
		std::cout << std::endl;
	}
}

void divideRowBy(double arr[], unsigned colls, double by) {
	for (int i = 0; i < colls; i++) {
		arr[i] /= by;
	}
}

void substractFromRow(double rowToSubtractFrom[], double rowToSubtract[], double coef, unsigned colls) {
	for (int i = 0; i < colls; i++) {
		rowToSubtractFrom[i] -= (rowToSubtract[i] * coef);
	}
}

void substractFromOtherRows(double matrix[][3], unsigned rows, unsigned colls, int currentRow) {
	for (int i = 0; i < rows; i++) {
		if (i == currentRow) {
			continue;
		}
		
		substractFromRow(matrix[i], matrix[currentRow], matrix[i][currentRow], colls);
	}
}

void collectResults(double matrix[][3], unsigned rows, unsigned colls, double results[]) {
	for (int i = 0; i < rows; i++) {
		results[i] = matrix[i][colls - 1];
	}
}

void gauss(double matrix[][3], unsigned n, double results[]) {
	unsigned rows = n;
	unsigned colls = n + 1;

	for (int i = 0; i < rows; i++) {
		// At every point matrix[i][i] is the pivot
		divideRowBy(matrix[i], colls, matrix[i][i]);
		substractFromOtherRows(matrix, rows, colls, i);
	}

	collectResults(matrix, rows, colls, results);
}

int main() {
	const unsigned rows = 2;
	const unsigned colls = 3;

	double m[rows][colls] = { {2, 6, 40},  // 2x + 6y = 40
							  {4, 1, 14} };// 4x +  y = 14

	double results[rows];
	gauss(m, rows, results);

	printArr(results, rows);
}
