#include <iostream>
using namespace std;

int board[3][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} };
string display[3][3] = { {"-", "-", "-"}, {"-", "-", "-"}, {"-", "-", "-"} };

void generateBoard() {
    for (int i = 0; i < 3; i++) {
        cout << display[i][0] << " | " << display[i][1] << " | " << display[i][2] << "\n";
    }
}

bool catchStreak(int a, int b, int c) {
    return (a == b && b == c && a != -1);
}

bool checkStreak() {
    for (int i = 0; i < 3; i++) {
        if (catchStreak(board[i][0], board[i][1], board[i][2]) || catchStreak(board[0][i], board[1][i], board[2][i]))
            return true;
    }
    return catchStreak(board[0][0], board[1][1], board[2][2]) || catchStreak(board[0][2], board[1][1], board[2][0]);
}

bool markTile(int tile, int player) {
    if (tile < 1 || tile > 9) return false;
    int row = (tile - 1) / 3;
    int col = (tile - 1) % 3;
    if (board[row][col] != -1) return false; // Tile already marked
    board[row][col] = player;
    display[row][col] = player == 0 ? "O" : "1";
    return true;
}

int main() {
    int player = 0, tile;

    cout << "Tic-Tac-Toe\nEnter 1-9 to mark your tile:\n1 | 2 | 3\n4 | 5 | 6\n7 | 8 | 9\n";
    for (int i = 0; i < 9; i++) {
        generateBoard();
        cout << "Player " << player << "'s turn. Enter a tile number: ";
        cin >> tile;

        if (!markTile(tile, player)) {
            cout << "Invalid move. Try again.\n";
            --i;
            continue;
        }

        if (checkStreak()) {
            generateBoard();
            cout << "Player " << player << " wins!\n";
            return 0;
        }

        player = 1 - player;
    }

    cout << "It's a draw!\n";
    return 0;
}