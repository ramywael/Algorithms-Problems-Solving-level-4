/*
 * Program: Year Time Calculator
 * Calculates days, hours, minutes, and seconds in a given year (accounts for leap years).
 */
#include<iostream>
using namespace std;



short ReadYear() {
	short Year;
	cout << "Please Enter The Year To Check\n";
	cin >> Year;
	return Year;
}

bool isLeapYear(short Year) {
	
	return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDays(short Year) {
	return isLeapYear(Year) ? 366 : 365;
}

short NumberOfHours(short Year) {
	return NumberOfDays(Year) * 24;
}

int NumberOfMinutes(short Year) {
	return NumberOfHours(Year) * 60;
}

int NumberOfSeconds(short Year) {
	return NumberOfMinutes(Year) * 60;
}

void PrintResult(short Year) {
	cout << "Number Of Days is     in Year [" << Year << "] is :" << NumberOfDays(Year)<<"\n";
	cout << "Number Of Hours is     in Year [" << Year << "] is :" << NumberOfHours(Year) << "\n";
	cout << "Number Of Minutes is     in Year [" << Year << "] is :" << NumberOfMinutes(Year) << "\n";
	cout << "Number Of Seconds is     in Year [" << Year << "] is :" << NumberOfSeconds(Year) << "\n";
}


int main() {
	short Year = ReadYear();
	PrintResult(Year);
	system("pause > 0");
}