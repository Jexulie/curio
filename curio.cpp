#include "curio.hpp"
#include <string>
#include <iostream>

using namespace std;
// Could Return a String
// add - day - month - year change to epoch timing
// recive a string and turn in to a date - vice versa
Time::Time() {
    now = time(0);
    local = localtime(&now);
}
void Time::curHour(void){
    cout << local->tm_hour << endl;
}

void Time::curMin(void){
    cout << local->tm_min << endl;
}
void Time::curDay(void){
    cout << local->tm_mday << endl;
}
void Time::curWeekDay(void){
    switch(local->tm_wday){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
    }    
}
void Time::curSec(void){
    cout << local->tm_sec << endl;
}
void Time::curMonth(void){
    cout << local->tm_mon + 1 << endl;
}
void Time::curYear(void){
    cout << local->tm_year + 1900 << endl;
}
void Time::addMin(int min){
    now += 60 * min;
    local = localtime(&now);
}
void Time::addHour(int hour){
    now += 60 * 60 * hour;
    local = localtime(&now);
}
void Time::addDay(int day){
    now += 60 * 60 * 24 * day;
    local = localtime(&now);
}
void Time::addMonth(int month){
    now += 60 * 60 * 24 * 30 * month;
    local = localtime(&now);
}
void Time::addYear(int year){
    now += 60 * 60 * 24 * 30 * 12 * year;
    local = localtime(&now);
}