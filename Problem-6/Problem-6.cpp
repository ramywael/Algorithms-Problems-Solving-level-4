/*
 * Program: Month Time Calculator (February Only)
 * More Readable
 * Calculates days, hours, minutes, and seconds in February for a given year.
 */
#include<iostream>
using namespace std;

short ReadYear() {
	short Year;
	cout << "Please Enter The Year To Check\n";
	cin >> Year;
	return Year;
}

short ReadMonth() {
	short Month;
	cout << "Please Enter The Month in Number \n";
	cin >> Month;
	return Month;
}

bool isLeapYear(short Year) {
	return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDays(short Year, short Month) {
	if (Month < 1 || Month > 12)
		return 0;
	return Month == 2 ? isLeapYear(Year) ? 28 : 29 : (Month == 4 || Month == 6 || Month == 9 || Month ==11)  ? 30 :31 ;
}

short NumberOfHours(short Year, short Month) {
	return NumberOfDays(Year, Month) * 24;
}

int NumberOfMinutes(short Year, short Month) {
	return NumberOfHours(Year, Month) * 60;
}

int NumberOfSeconds(short Year, short Month) {
	return NumberOfMinutes(Year, Month) * 60;
}

void PrintResult(short Month, short Year) {
	cout << "Number Of Days is     in Month [" << Month << "] is :" << NumberOfDays(Year, Month) << "\n";
	cout << "Number Of Hours is     in Month [" << Month << "] is :" << NumberOfHours(Year, Month) << "\n";
	cout << "Number Of Minutes is     in Month [" << Month << "] is :" << NumberOfMinutes(Year, Month) << "\n";
	cout << "Number Of Seconds is     in Month [" << Month << "] is :" << NumberOfSeconds(Year, Month) << "\n";
}


int main() {
	short Year = ReadYear();
	short Month = ReadMonth();
	PrintResult(Month, Year);
	system("pause > 0");
}