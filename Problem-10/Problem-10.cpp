/*

*/

#include <iostream>
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

short ReadDay() {
	short Day;
	cout << "Please Enter a Day  ? : ";
	cin >> Day;
	return Day;
}

bool isLeapYear(short Year) {
	return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDays(short Year, short Month) {
	if (Month < 1 || Month > 12)
		return 0;
	return Month == 2 ? isLeapYear(Year) ? 29 : 28 : (Month == 4 || Month == 6 || Month == 9 || Month == 11) ? 30 : 31;
}

short CalculateRemainingDays(short day,short month,short year) {
	short result=0;
	for (int i = 1;i < month;i++) {
		result += NumberOfDays(year, i);
   }
	return result+day;
}
int main()
{
	short month = ReadMonth();
	short year = ReadYear();
	short day = ReadDay();
	short numberOfDays = NumberOfDays(year, month);
	cout <<"\n"<<CalculateRemainingDays( day,month, year);
}
