#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void displayTime() const {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    friend Time operator+(const Time& t1, const Time& t2);
};

Time operator+(const Time& t1, const Time& t2) {
    int totalSeconds = t1.seconds + t2.seconds;
    int carryMinutes = totalSeconds / 60;
    totalSeconds %= 60;

    int totalMinutes = t1.minutes + t2.minutes + carryMinutes;
    int carryHours = totalMinutes / 60;
    totalMinutes %= 60;

    int totalHours = t1.hours + t2.hours + carryHours;

    return Time(totalHours, totalMinutes, totalSeconds);
}

int main() {
    Time t1(1, 20, 30);
    Time t2(2, 15, 25);

    std::cout << "Time t1: ";
    t1.displayTime();

    std::cout << "Time t2: ";
    t2.displayTime();

    Time t3 = t1 + t2;

    std::cout << "Time t3: ";
    t3.displayTime();

    return 0;
}