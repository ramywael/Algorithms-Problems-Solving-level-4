/*
 * Program: Month Time Calculator (February Only)
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

short NumberOfDays(short Year,short Month) {
	if (Month < 1 || Month > 12)
		return 0;
	if (Month == 2)
		return isLeapYear(Year) ? 29 : 28;
	int arr[] = { 1,3,5,6,8,10,12 };
	for (int i = 0;i < 8;i++) {
		if (arr[i] == Month)
			return 31;
	}
	return 30;
}

short NumberOfHours(short Year,short Month) {
	return NumberOfDays(Year,Month) * 24;
}

int NumberOfMinutes(short Year,short Month) {
	return NumberOfHours(Year,Month) * 60;
}

int NumberOfSeconds(short Year, short Month) {
	return NumberOfMinutes(Year,Month) * 60;
}

void PrintResult(short Month,short Year) {
	cout << "Number Of Days is     in Month [" << Month << "] is :" << NumberOfDays(Year,Month) << "\n";
	cout << "Number Of Hours is     in Month [" << Month << "] is :" << NumberOfHours(Year,Month) << "\n";
	cout << "Number Of Minutes is     in Month [" << Month << "] is :" << NumberOfMinutes(Year,Month) << "\n";
	cout << "Number Of Seconds is     in Month [" << Month << "] is :" << NumberOfSeconds(Year,Month) << "\n";
}


int main() {
	short Year = ReadYear();
	short Month = ReadMonth();
	PrintResult(Month,Year);
	system("pause > 0");
}