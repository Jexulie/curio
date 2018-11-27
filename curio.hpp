#pragma once
#include <ctime>

class Time{
    public:
        time_t now;
        tm *local;
        Time();
        void curHour(void);
        void curMin(void);
        void curDay(void);
        void curWeekDay(void);
        void curSec(void);
        void curMonth(void);
        void curYear(void);
        void addMin(int min);
        void addHour(int hour);
        void addDay(int day);
        void addMonth(int month);
        void addYear(int year);
};