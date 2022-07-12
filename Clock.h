#ifndef CLOCK_H
#define CLOCK_H
using namespace std;

// Clock class definition
class Clock {
    private:
        string hours;
        string minutes;
        string seconds;
    public:
        Clock();
        void printTime();
};


// Clock function declarations
void ShowClocks();

#endif
