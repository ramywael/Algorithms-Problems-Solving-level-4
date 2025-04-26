/*
 * Program: Leap Year Checker
 * Determines if a given year is a leap year or not.
 */

#include<iostream>
using namespace std;


int ReadYear() {
	int Year;
	cout << "Please Enter The Year \n";
	cin >> Year;
	return Year;
}

bool isLeapYear() {
	int Year = ReadYear();
	return (Year % 400 == 0 || (Year % 4  == 0 && Year % 100 !=0));
}

int main() {
	if (isLeapYear())
		cout << "Leap Year";
	else
		cout << "Not Leap Year";
	system("pause>0");
}