#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

namespace curio {
    // Could Return a String
    // add - day - month - year change to epoch timing
    // recive a string and turn in to a date - vice versa
    class Time {
        public:
            time_t now;
            tm *local;
            Time(){
                now = time(0);
                local = localtime(&now);
            }

            void curHour(void){
                cout << local->tm_hour << endl;
            }

            void curMin(void){
                cout << local->tm_min << endl;
            }

            void curDay(void){
                cout << local->tm_mday << endl;
            }

            void curWeekDay(void){
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

            void curSec(void){
                cout << local->tm_sec << endl;
            }

            void curMonth(void){
                cout << local->tm_mon + 1 << endl;
            }

            void curYear(void){
                cout << local->tm_year + 1900 << endl;
            }

            void addMin(int min){
                now += 60 * min;
                local = localtime(&now);
            }

            void addDay(int day){
                now += 60 * 60 * 24 * day;
                local = localtime(&now);
            }

            void addMonth(int month){
                now += 60 * 60 * 24 * 30 * month;
                local = localtime(&now);
            }

            void addYear(int year){
                now += 60 * 60 * 24 * 30 * 12 * year;
                local = localtime(&now);
            }
    };
}