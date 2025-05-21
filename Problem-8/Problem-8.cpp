
/*
*  Write a program  to print month calender
*/

#include <iostream>
#include <iomanip> // for setw
using namespace std;

short WeekOfDayOrder(short day, short month, short year) {
	short a = (14 - month) / 12;
	short y = year - a;
	short m = month + (12 * a) - 2;
	short d = (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
	return d;
}

short ReadYear() {
	short Year;
	cout << "Please Enter The Year:\n";
	cin >> Year;
	return Year;
}

short ReadMonth() {
	short Month;
	cout << "Please Enter The Month (1-12):\n";
	cin >> Month;
	return Month;
}

bool isLeapYear(short Year) {
	return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDays(short Year, short Month) {
	if (Month < 1 || Month > 12)
		return 0;

	if (Month == 2)
		return isLeapYear(Year) ? 29 : 28;
	else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
		return 30;
	else
		return 31;
}

string ConvertNumberMonthToWord(short month) {
	string arr[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	return arr[month - 1];
}

void PrintMonthCalendar(short month, short year) {
	short current = WeekOfDayOrder(1, month, year);
	short daysInMonth = NumberOfDays(year, month);

	// Header
	cout << "\n  ------------ " << ConvertNumberMonthToWord(month) << " " << year << " ------------\n";
	cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

	// Leading spaces
	for (int i = 0; i < current; i++) {
		cout << "     ";
	}

	// Print all days
	for (int day = 1; day <= daysInMonth; day++) {
		cout << setw(5) << day;

		// Line break after Saturday
		if ((current + day) % 7 == 0)
			cout << "\n";
	}

	cout << "\n--------------------------------------------\n";
}

int main() {
	short year = ReadYear();
	short month = ReadMonth();

	PrintMonthCalendar(month, year);

	system("pause > 0");
	return 0;
}
