/*
Write a program to read a date ,and print the day name of week
*/

#include <iostream>
#include<string>
using namespace std;

short ReadYear() {
    short Year;
    cout << "Please Enter a Year  ? : ";
    cin >> Year;
    return Year;
}

short ReadMonth() {
    short Month;
    cout << "Please Enter a Month  ? : ";
    cin >> Month;
    return Month;
}

short ReadDay() {
    short Day;
    cout << "Please Enter a Day  ? : ";
    cin >> Day;
    return Day;
}

string ConcateDate(short day, short month, short year) {
    string date= to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    return date;
}

short WeekOfDayOrder(short day, short month, short year) {
    short a;
    a = (14 - month) / 12;
    short y;
    y = year - a;
    short m;
    m = month + (12*a)-2;
    short d = 0;
    d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    return d;
}

string DayShortName(short index) {
    string arr[] = {"Sun","Mon","Tue","Wed","Thr","Fri" };
    return arr[index];
}
int main()
{
    short day = ReadDay();
    short month = ReadMonth();
    short year = ReadYear();

    cout <<"Date          : " << ConcateDate(day, month, year);
    cout << "\nDay Order :" << WeekOfDayOrder(day,month,year);
    cout << "\nDay Name :" << DayShortName(WeekOfDayOrder(day, month, year));

    system("pause>0");
}
