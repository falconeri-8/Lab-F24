// My bad code for a TicTacToe game but readable
// Does not use any external libraries just "beautiful" raw language
// Contributions are appreciated

#include <iostream>
using namespace std;

class Map {
private:
	int array[3][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} };
	string display[3][3] = { {"-", "-", "-"}, {"-", "-", "-"}, {"-", "-", "-"} };

	bool catchStreak(int a, int b, int c) {
		return (a == b && b == c && a != -1);
	}

public:
	void Generate() const {
		for (auto &row : display)
			cout << row[0] << " | " << row[1] << " | " << row[2] << "\n";
	}

	bool Streak() {
		for (int i = 0; i < 3; i++) {
			if (catchStreak(array[i][0], array[i][1], array[i][2]) || catchStreak(array[0][i], array[1][i], array[2][i]))
				return true;
		}
		return catchStreak(array[0][0], array[1][1], array[2][2]) || catchStreak(array[0][2], array[1][1], array[2][0]);
	}

	bool MarkTile(int tile, int player) {
		if (tile < 1 || tile > 9) return false; // Ensure valid tile input
		int row = (tile - 1) / 3, col = (tile - 1) % 3;
		if (array[row][col] != -1) return false; // Tile already marked
		array[row][col] = player;
		display[row][col] = player == 0 ? "O" : "1";
		return true;
	}
};

int main() {
	Map game;
	int player = 0, tile;

	cout << "Tic-Tac-Toe\nEnter 1-9 to mark your tile:\n1 | 2 | 3\n4 | 5 | 6\n7 | 8 | 9\n";
	for (int i = 0; i < 9; i++) {
		game.Generate();
		cout << "Player " << player << "'s turn. Enter a tile number: ";
		cin >> tile;

		if (!game.MarkTile(tile, player)) {
			cout << "Invalid move. Try again.\n";
			--i;
			continue;
		}

		if (game.Streak()) {
			game.Generate();
			cout << "Player " << player << " wins!\n";
			return 0;
		}
		player = 1 - player;
	}

	cout << "It's a draw!\n";
	return 0;
}
