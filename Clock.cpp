// Clock class for different clock types
#include <iostream>
#include <iomanip>
#include <string>
#include <format>
#include "Clock.h"

using namespace std;

void Clock::printTime() {
    cout << "FIXME: Finish coding 12-hour clock" << endl;
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


// Displays options to the user
void ShowOptions() {
    cout << "FIXME: finish printing user options" << endl;
}
