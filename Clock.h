#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>

using namespace std;

// Clock class declarations
class Clock {
    private:
        string hours;
        string minutes;
        string seconds;
    public:
        void printTime();
};


// clock function declarations
void ShowClocks();
void showOptions();


#endif
