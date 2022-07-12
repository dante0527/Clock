// Clock class for different clock types
#include <iostream>
#include <iomanip>
#include <string>
#include <format>
#include "Clock.h"
using namespace std;


// Clock constructor
Clock::Clock() {
    hours = "00";
    minutes = "00";
    seconds = "00";
}
// Clock function definitions
void Clock::printTime() {
    cout << hours << ':' << minutes << ':' << seconds << endl;
}

// Displays 12 and 24 hour clocks to the user
void ShowClocks() {

    // Set width to 26
    cout << setw(26);
    // Set border char
    cout << setfill('*');

    cout << "" << endl;

    cout << "*" << "     12-Hour Clock      " << "*" << endl;


}
