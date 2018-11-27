#pragma once
#include <string>
#include <ctime>

using namespace std;

class Time{
    public:
        time_t now;
        tm *local;

        Time();
        ~Time();

        string curHour(void);
        string curMin(void);
        string curDay(void);
        string curWeekDay(void);
        string curSec(void);
        string curMonth(void);
        string curYear(void);

        void addMin(int min);
        void addHour(int hour);
        void addDay(int day);
        void addMonth(int month);
        void addYear(int year);
};