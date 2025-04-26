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
  if (Year % 400 == 0)
	  return true;
  else if (Year % 4 == 0)
	  return true;
  else if (Year % 100 == 0)
	  return false;
  else
	  return false;
}

int main() {
	if (isLeapYear())
		cout << "Leap Year";
	else
		cout << "Not Leap Year";
	system("pause>0");
}