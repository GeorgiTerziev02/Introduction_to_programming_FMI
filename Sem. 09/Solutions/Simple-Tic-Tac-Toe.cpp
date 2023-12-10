
// This cpp can be used for examples of different iterations over an matrix
// Simple tic tac toe game
// - only two players
// - only 3 x 3
// - not optimized check for winner
#include <iostream>

// Using rows and cols just to try out working with matrix
const int ROWS = 3;
const int COLS = 3;
const int INITIAL_VALUE = 0;

int getPlayer(bool isFirstPlayer) {
	// return 1 + !isFirstPlayer;
	return isFirstPlayer ? 1 : 2;
}

void initBoardWithValue(int board[][COLS], int rows, int cols, int value) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = value;
		}
	}
}

bool isInsideBoard(int x, int y) {
	return 0 <= x && x < ROWS && 0 <= y && y < COLS;
}

bool isPopulatedField(int x, int y, int board[][COLS]) {
	return board[x][y] != INITIAL_VALUE;
}

void enterValidCoordinates(int& x, int& y, int board[][COLS]) {
	do {
		std::cin >> x >> y;
	} while (!isInsideBoard(x, y) || isPopulatedField(x, y, board));
}

void printBoard(int board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << board[i][j];
		}

		std::cout << std::endl;
	}
}

bool hasWinnerOnRows(int board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		bool isFullRow = true;
		for (int j = 0; j < cols - 1; j++) {
			if (!isPopulatedField(i, j, board) || board[i][j] != board[i][j + 1]) {
				isFullRow = false;
				break;
			}
		}

		if (isFullRow) {
			return true;
		}
	}

	return false;
}

bool hasWinnerOnCols(int board[][COLS], int rows, int cols) {
	for (int j = 0; j < COLS; j++) {
		bool isFullCol = true;
		for (int i = 0; i < rows - 1; i++) {
			if (!isPopulatedField(i, j, board) || board[i][j] != board[i + 1][j]) {
				isFullCol = false;
				break;
			}
		}

		if (isFullCol) {
			return true;
		}
	}

	return false;
}

bool hasWinnerOnMainDiagonal(int board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows - 1; i++) {
		if (!isPopulatedField(i, i, board) || board[i][i] != board[i + 1][i + 1]) {
			return false;
		}
	}

	return true;
}

bool hasWinnerOnSecondaryDiagonal(int board[][COLS], int rows, int cols) {
	for (int i = 0, j = cols - 1; i < rows - 1; i++, j--) {
		if (!isPopulatedField(i, i, board) || board[i][j] != board[i + 1][j - 1]) {
			return false;
		}
	}

	return true;
}

bool hasWinner(int board[][COLS], int rows, int cols) {
	return hasWinnerOnRows(board, rows, cols)
		|| hasWinnerOnCols(board, rows, cols)
		|| hasWinnerOnMainDiagonal(board, rows, cols)
		|| hasWinnerOnSecondaryDiagonal(board, rows, cols);
}

int main() {
	int board[ROWS][COLS];
	initBoardWithValue(board, ROWS, COLS, INITIAL_VALUE);

	// isFirstPlayer => 1
	// !isFirstPlayer => 2
	bool isFirstPlayer = true;
	int roundCounter = 0;
	while (roundCounter < ROWS * COLS) {
		std::cout << "Player " << getPlayer(isFirstPlayer) << " enter coordinates: ";
		int x, y;
		enterValidCoordinates(x, y, board);

		board[x][y] = getPlayer(isFirstPlayer);

		if (hasWinner(board, ROWS, COLS)) {
			std::cout << std::endl << std::endl;
			std::cout << "Player " << getPlayer(isFirstPlayer) << " wins!" << std::endl;
			printBoard(board, ROWS, COLS);
			break;
		}

		isFirstPlayer = !isFirstPlayer;
		printBoard(board, ROWS, COLS);
		roundCounter++;
	}

	if (roundCounter == ROWS * COLS) {
		std::cout << std::endl << std::endl;
		std::cout << "Draw!" << std::endl;
	}
}