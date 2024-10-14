#include <iostream>

using namespace std;

void log(string message, bool newLine) {
	newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

class Map {

	private:
		bool catchStreak(int _1, int _2, int _3) {
			if (_1 == _2 && _2 == _3 && _1 != -1 && _2 != -1 && _3 != -1) {
				return true;
			}
			return false;
		}

	public:
		int array[9] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};
		string display[9] = {"-","-","-","-","-","-","-","-","-",};



		void Generate() const {
			log (display[0] + " | " + display[1] + " | " + display[2] , true);
			log (display[3] + " | " + display[4] + " | " + display[5] , true);
			log (display[6] + " | " + display[7] + " | " + display[8] , true);
		}

		bool Streak() {

			if (catchStreak(array[0], array[1], array[2])) { return true; }
			if (catchStreak(array[3], array[4], array[5])) { return true; }
			if (catchStreak(array[6], array[7], array[8])) { return true; }

			if (catchStreak(array[0], array[3], array[6])) { return true; }
			if (catchStreak(array[1], array[4], array[7])) { return true; }
			if (catchStreak(array[2], array[5], array[8])) { return true; }

			if (catchStreak(array[0], array[4], array[8])) { return true; }
			if (catchStreak(array[2], array[4], array[6])) { return true; }

			return false;
		}
};

int main() {
	int player = 0;
	int tile;

	Map Map;

	log ("Playing TicTacToe with Player 0 & Player 1", true);
	log ("Enter 1 - 9 to mark your tile", true);
	log ("1 | 2 | 3", true);
	log ("4 | 5 | 6", true);
	log ("7 | 8 | 9", true);

	for (int i = 0; i < 9; i++) {
		cin >> tile;

		if (Map.array[tile - 1] != -1)
		{
			log ("Tile " + to_string(tile) + " is already marked" , true);
			--i;
			continue;
		}

		if (player == 1) {
			Map.display[tile - 1] = "1";
			Map.array[tile - 1] = 1;
			player = 0;
		} else if (player == 0) {
			Map.display[tile - 1] = "O";
			Map.array[tile - 1] = 0;
			player = 1;
		}

		Map.Generate();
		if (Map.Streak() == true)
		{
			log ("Streak", true);
			break;
		}
	}

	log ("Game ended", true);

}
