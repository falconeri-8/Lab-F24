#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUM_MONTHS = 12;
const int SEATS_PER_MONTH = 31;

void loadDataFromFile(int seats[NUM_MONTHS][SEATS_PER_MONTH], const string &filename);
void saveDataToFile(int seats[NUM_MONTHS][SEATS_PER_MONTH], const string &filename);
void displaySeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]);
void modifySeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]);
void initializeSeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]);

int main() {
    int seats[NUM_MONTHS][SEATS_PER_MONTH];
    string filename = "seating_data.txt";

    initializeSeats(seats);

    loadDataFromFile(seats, filename);

    int choice;
    do {
        cout << "\nSeating Management System\n";
        cout << "1. Display Seating for All Months\n";
        cout << "2. Modify Seating\n";
        cout << "3. Save Data to File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                modifySeats(seats);
                break;
            case 3:
                saveDataToFile(seats, filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void initializeSeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]) {
    for (int i = 0; i < NUM_MONTHS; i++) {
        for (int j = 0; j < SEATS_PER_MONTH; j++) {
            seats[i][j] = 0;
        }
    }
}

void loadDataFromFile(int seats[NUM_MONTHS][SEATS_PER_MONTH], const string &filename) {
    ifstream inputFile(filename);
    if (inputFile) {
        for (int i = 0; i < NUM_MONTHS; i++) {
            for (int j = 0; j < SEATS_PER_MONTH; j++) {
                inputFile >> seats[i][j];
            }
        }
        inputFile.close();
        cout << "Data loaded from file.\n";
    } else {
        cout << "No existing data file found. Using default seating arrangement.\n";
    }
}

void saveDataToFile(int seats[NUM_MONTHS][SEATS_PER_MONTH], const string &filename) {
    ofstream outputFile(filename);
    if (outputFile) {
        for (int i = 0; i < NUM_MONTHS; i++) {
            for (int j = 0; j < SEATS_PER_MONTH; j++) {
                outputFile << seats[i][j] << " ";
            }
            outputFile << endl;
        }
        outputFile.close();
        cout << "Data saved to file.\n";
    } else {
        cout << "Error opening file for saving.\n";
    }
}

void displaySeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]) {
    cout << "\nSeating Arrangement for All Months:\n";
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Month " << i + 1 << ": ";
        for (int j = 0; j < SEATS_PER_MONTH; j++) {
            cout << (seats[i][j] == 0 ? "Empty " : "Occupied ");
        }
        cout << endl;
    }
}

void modifySeats(int seats[NUM_MONTHS][SEATS_PER_MONTH]) {
    int month, seat, status;
    cout << "Enter the month number (1-12): ";
    cin >> month;
    if (month < 1 || month > 12) {
        cout << "Invalid month number.\n";
        return;
    }

    cout << "Enter the seat number (1-10): ";
    cin >> seat;
    if (seat < 1 || seat > 10) {
        cout << "Invalid seat number.\n";
        return;
    }

    cout << "Enter 1 for Occupied or 0 for Empty: ";
    cin >> status;

    if (status != 0 && status != 1) {
        cout << "Invalid status.\n";
        return;
    }

    // Modify seat status
    seats[month - 1][seat - 1] = status;
    cout << "Seat status updated.\n";
}
