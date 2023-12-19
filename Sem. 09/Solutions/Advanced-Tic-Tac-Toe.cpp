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


char getPlayer(unsigned currentPlayer) {
	return 'A' + currentPlayer;
}

bool areSameCharactersInDirection(
	char board[DIMENSION][DIMENSION], int x, int y, int rowIncrement, int colIncrement
) {
	bool areSameCharacters = true;
	char initialCharacter = board[x][y];

	while (isInsideBoard(x, y)) {
		if (board[x][y] != initialCharacter) {
			areSameCharacters = false;
			break;
		}

		x += rowIncrement;
		y += colIncrement;
	}

	return areSameCharacters;
}

bool areSameCharactersInLine(char board[DIMENSION][DIMENSION], int x, int y, int rowIncrement, int colIncrement) {
	return areSameCharactersInDirection(board, x, y, rowIncrement, colIncrement) // forward
		&& areSameCharactersInDirection(board, x, y, -rowIncrement, -colIncrement); // backward
}

bool hasWinner(char board[][DIMENSION], int x, int y) {
	if (
		areSameCharactersInLine(board, x, y, 0, 1) && // check row
		areSameCharactersInLine(board, x, y, 1, 0)	  // check col
		) {
		return true;
	}

	if (x == y && areSameCharactersInLine(board, x, y, 1, 1)) {
		return true;
	}

	if (x + y == DIMENSION - 1 && areSameCharactersInLine(board, x, y, 1, -1)) {
		return true;
	}

	return false;
}
int main() {
	char board[DIMENSION][DIMENSION];
	initBoardWithValue(board, INITIAL_VALUE);

	for (
		unsigned roundCounter = 0, unsigned currentPlayer = 0;
		roundCounter < DIMENSION * DIMENSION;
		roundCounter++, (++currentPlayer) %= PLAYERS_COUNT
		) {
		char currentPlayerSymbol = getPlayer(currentPlayer);
		std::cout << "Player " << currentPlayerSymbol << " enter coordinates: ";
		int x, y;
		enterValidCoordinates(x, y, board);

		board[x][y] = currentPlayerSymbol;

		if (hasWinner(board, x, y)) {
			std::cout << std::endl << std::endl;
			std::cout << "Player " << currentPlayerSymbol << " wins!" << std::endl;
			printBoard(board);
			return;
		}

		printBoard(board);
	}

	// if loop ended => draw
	std::cout << std::endl << std::endl;
	std::cout << "Draw!" << std::endl;
}
