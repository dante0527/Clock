// Dante Lee - Project 3-1
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <string>
#include "Clock.h"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

// Displays options to the user
void ShowOptions() {
    // Print upper border
    cout << setw(26) << setfill('*') << "" << endl;
    //Print options
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    // Print lower border
    cout << setw(26) << setfill('*') << "" << endl;
}


// Displays interactive 12 and 24 hour clocks
int main() {
    // Instantiate clock objects
    Clock clock12;
    Clock clock24;
    int userInput = -1;
    char nextChar;

    // Set clock types
    clock12.setType("12");
    clock24.setType("24");

    do {
        // Clear terminal
        system("clear");

        // Display clocks
        ShowClocks(clock12, clock24);

        // Display user options
        ShowOptions();

        // Add 1 second
        //clock12.setTime(3);
        //clock24.setTime(3);

        // Wait 1 second
        //sleep_for(seconds(1));

        // Accept user input
        cin >> userInput;

        // Execute user input
        switch(userInput) {
            // Add one hour
            case 1:
                clock12.setTime(1);
                clock24.setTime(1);
                break;
            // Add one minute
            case 2:
                clock12.setTime(2);
                clock24.setTime(2);
                break;
            // Add one second
            case 3:
                clock12.setTime(3);
                clock24.setTime(3);
                break;
            // Exit program
            case 4:
                cout << "Goodbye." << endl;
                break;
            default:
                cout << "Invalid input." << endl;
                break;
        }
    }
    while (int(userInput) != 4);

    return 0;
}
