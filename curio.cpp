#include "curio.hpp"
#include <iostream>
#include <string>

using namespace std;

// Could Return a String
// add - day - month - year change to epoch timing
// recive a string and turn in to a date - vice versa
Time::Time() {
    now = time(0);
    local = localtime(&now);
}

Time::~Time(){}

string Time::curHour(void){
   return to_string(local->tm_hour);
}

string Time::curMin(void){
   return to_string(local->tm_min);
}
string Time::curDay(void){
   return to_string(local->tm_mday);
}
string Time::curWeekDay(void){
    switch(local->tm_wday){
        case 1:
           return string("Monday");
            break;
        case 2:
           return string("Tuesday");
            break;
        case 3:
           return string("Wednesday");
            break;
        case 4:
           return string("Thursday");
            break;
        case 5:
           return string("Friday");
            break;
        case 6:
           return string("Saturday");
            break;
        case 7:
           return string("Sunday");
            break;
        default:
            return string("");
            break;
    }    
}
string Time::curSec(void){
   return to_string(local->tm_sec);
}
string Time::curMonth(void){
   return to_string(local->tm_mon + 1);
}
string Time::curYear(void){
   return to_string(local->tm_year + 1900);
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