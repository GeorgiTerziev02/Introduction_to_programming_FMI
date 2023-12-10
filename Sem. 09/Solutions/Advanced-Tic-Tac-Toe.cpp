#include <iostream>

const unsigned DIMENSION = 3; // ROWS == COLS => DIMENSION
const unsigned PLAYERS_COUNT = 2;
const char INITIAL_VALUE = ' ';

void initBoardWithValue(char board[][DIMENSION], char value) {
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			board[i][j] = value;
		}
	}
}

void printBoard(char board[][DIMENSION]) {
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			std::cout << board[i][j];
		}

		std::cout << std::endl;
	}
}


bool isInsideBoard(int x, int y) {
	return 0 <= x && x < DIMENSION && 0 <= y && y < DIMENSION;
}

bool isPopulatedField(int x, int y, char board[][DIMENSION]) {
	return board[x][y] != INITIAL_VALUE;
}


void enterValidCoordinates(int& x, int& y, char board[][DIMENSION]) {
	do {
		std::cin >> x >> y;
	} while (!isInsideBoard(x, y) || isPopulatedField(x, y, board));
}

bool hasWinner(char board[][DIMENSION]) {
	// TODO: define a winner
	return false;
}

int main() {
	char board[DIMENSION][DIMENSION];
	initBoardWithValue(board, INITIAL_VALUE);

    // TODO: which player is playing now?
	unsigned roundCounter = 0;
	while (roundCounter < DIMENSION * DIMENSION) {
		// std::cout << "Player " << getPlayer(isFirstPlayer) << " enter coordinates: ";
		// int x, y;
		// enterValidCoordinates(x, y, board);

		// board[x][y] = getPlayer(isFirstPlayer);

		if (hasWinner(board)) {
			std::cout << std::endl << std::endl;
			// std::cout << "Player " << getPlayer(isFirstPlayer) << " wins!" << std::endl;
			printBoard(board);
			break;
		}

		// isFirstPlayer = !isFirstPlayer;
		printBoard(board);
		roundCounter++;
	}

	if (roundCounter == DIMENSION * DIMENSION) {
		std::cout << std::endl << std::endl;
		std::cout << "Draw!" << std::endl;
	}
}
