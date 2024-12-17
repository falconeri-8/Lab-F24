#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int ROWS = 10;
const int SEATS_PER_ROW = 10;
const int MAX_DATE_LENGTH = 6; // For "DD-MM" format

void initializeSeats(char seats[ROWS][SEATS_PER_ROW]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS_PER_ROW; j++) {
            seats[i][j] = 'A';
        }
    }
}

void displaySeats(char seats[ROWS][SEATS_PER_ROW]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS_PER_ROW; j++) {
            cout << "R" << i + 1 << "S" << j + 1 << ":" << seats[i][j] << " ";
        }
        cout << endl;
    }
}

bool readFromFile(const char* date, char seats[ROWS][SEATS_PER_ROW], const char* filename) {
    ifstream file(filename);
    char fileDate[MAX_DATE_LENGTH];
    char seatStatus;

    if (!file) {
        return false;
    }

    while (file >> fileDate) {
        if (strcmp(fileDate, date) == 0) {
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < SEATS_PER_ROW; j++) {
                    file >> seatStatus;
                    seats[i][j] = seatStatus;
                }
            }
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void writeToFile(const char* date, char seats[ROWS][SEATS_PER_ROW], const char* filename) {
    ifstream file(filename);
    ofstream tempFile("temp.txt");
    char fileDate[MAX_DATE_LENGTH];
    bool dateFound = false;

    if (file) {
        while (file >> fileDate) {
            if (strcmp(fileDate, date) == 0) {
                dateFound = true;
                tempFile << date << endl;
                for (int i = 0; i < ROWS; i++) {
                    for (int j = 0; j < SEATS_PER_ROW; j++) {
                        tempFile << seats[i][j] << " ";
                    }
                    tempFile << endl;
                }
            } else {
                tempFile << fileDate << endl;
                for (int i = 0; i < ROWS; i++) {
                    for (int j = 0; j < SEATS_PER_ROW; j++) {
                        char seatStatus;
                        file >> seatStatus;
                        tempFile << seatStatus << " ";
                    }
                    tempFile << endl;
                }
            }
        }
    }

    if (!dateFound) {
        tempFile << date << endl;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < SEATS_PER_ROW; j++) {
                tempFile << seats[i][j] << " ";
            }
            tempFile << endl;
        }
    }

    file.close();
    tempFile.close();

    remove(filename);
    rename("temp.txt", filename);
}

void bookSeat(char seats[ROWS][SEATS_PER_ROW], const char* seatCode) {
    int row = seatCode[1] - '1'; // Convert '1'-'10' to 0-9
    int col = seatCode[3] - '1'; // Convert '1'-'10' to 0-9

    if (row >= 0 && row < ROWS && col >= 0 && col < SEATS_PER_ROW) {
        if (seats[row][col] == 'A') {
            seats[row][col] = 'B';
            cout << "Seat " << seatCode << " booked successfully." << endl;
        } else {
            cout << "Seat " << seatCode << " is already booked!" << endl;
        }
    } else {
        cout << "Invalid seat code!" << endl;
    }
}

void cancelSeat(char seats[ROWS][SEATS_PER_ROW], const char* seatCode) {
    int row = seatCode[1] - '1';
    int col = seatCode[3] - '1';

    if (row >= 0 && row < ROWS && col >= 0 && col < SEATS_PER_ROW) {
        if (seats[row][col] == 'B') {
            seats[row][col] = 'A';
            cout << "Seat " << seatCode << " canceled successfully." << endl;
        } else {
            cout << "Seat " << seatCode << " is not booked!" << endl;
        }
    } else {
        cout << "Invalid seat code!" << endl;
    }
}

int main() {
    const char* filename = "reservations.txt";
    char seats[ROWS][SEATS_PER_ROW];
    char date[MAX_DATE_LENGTH];
    char seatCode[6];
    int choice;

    cout << "Enter date (DD-MM): ";
    cin >> date;

    if (!readFromFile(date, seats, filename)) {
        initializeSeats(seats);
    }

    do {
        cout << "\n1. Display Seats\n2. Book a Seat\n3. Cancel a Seat\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displaySeats(seats);
            break;
        case 2:
            cout << "Enter seat code to book (e.g., R1S1): ";
            cin >> seatCode;
            bookSeat(seats, seatCode);
            writeToFile(date, seats, filename);
            break;
        case 3:
            cout << "Enter seat code to cancel (e.g., R1S1): ";
            cin >> seatCode;
            cancelSeat(seats, seatCode);
            writeToFile(date, seats, filename);
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
