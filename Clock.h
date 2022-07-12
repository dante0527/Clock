#ifndef CLOCK_H
#define CLOCK_H
using namespace std;

// Clock class definition
class Clock {
    private:
        int hours;
        int minutes;
        int seconds;
        string clockType;
        string timeStatus;
    public:
        Clock();
        void setTime(int option);
        void printTime();
        // Mutators
        void setType(string type);
        // Accessors
        string getType();
};  


// Clock function declarations
void ShowClocks(Clock clock1, Clock clock2);

#endif
