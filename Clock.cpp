// Clock class for different clock types
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"
using namespace std;

// Clock constructor
Clock::Clock() {
    hours = 0;
    minutes = 0;
    seconds = 0;
    clockType = "null";
    timeStatus = "AM";
}

// Mutators
void Clock::setType(string type) {
    clockType = type;
}

// Accessors
string Clock::getType() {
    return clockType;
}

// Print time based on clockType
void Clock::printTime() {
    if (clockType == "24") {
        cout << setw(2) << setfill('0') << hours << ':';
        cout << setw(2) << setfill('0') << minutes << ':';
        cout << setw(2) << setfill('0') << seconds;
    }
    else if (clockType == "12") {
        cout << setw(2) << setfill('0') << hours << ':';
        cout << setw(2) << setfill('0') << minutes << ':';
        cout << setw(2) << setfill('0') << seconds << " " << timeStatus;
    }
}

// Changes the time of a clock object by incrementing the selected field
void Clock::setTime(int option) {
    switch (option) {
        // Add hour
        case 1:
            // 24-hour clock
            if (clockType == "24") {
                hours++;
                // Wrap hour at 24 and set zero
                if (hours == 24) {
                    hours = 0;
                }
            }
            // 12-hour clock
            else if (clockType == "12") {
                hours++;
                // Wrap hour at 12 and set zero
                if (hours == 12) {
                    hours = 0;
                    // Each time hour is wrapped, alternate timeStatus
                    if (timeStatus == "AM") {
                        timeStatus = "PM";
                    }
                    else {
                        timeStatus = "AM";
                    }
                }
            }
            break;
        // Add minute
        case 2:
            minutes++;
            // Wrap minute at 60 and add hour
            if (minutes == 60) {
                minutes = 0;
                setTime(1);
            }
            break;
        // Add second
        case 3:
            seconds++;
            // Wrap second at 60 and add minute
            if (seconds == 60) {
                seconds = 0;
                setTime(2);
            }
            break;
    }
}


// Displays 12 and 24 hour clocks to the user
void ShowClocks(Clock clock12, Clock clock24) {

    // Print upper border
    cout << setw(26) << setfill('*') << "";
    cout << setw(5) << setfill(' ')<< "";
    cout << setw(26) << setfill('*') << "";
    cout << endl;

    // Print clock titles
    cout << "*" << "     12-Hour Clock      " << "*";
    cout << setw(5) << setfill(' ') << "";
    cout << "*" << "      24-Hour Clock     " << "*";
    cout << endl;

    // Print 12-Hour clock time
    cout << "*      ";
    clock12.printTime();
    cout << "       *     ";

    // Print 24-Hour clock time
    cout << "*        ";
    clock24.printTime();
    cout << "        *" << endl;

    // Print lower border
    cout << setw(26) << setfill('*') << "";
    cout << setw(5) << setfill(' ')<< "";
    cout << setw(26) << setfill('*') << "";
    cout << endl;
}