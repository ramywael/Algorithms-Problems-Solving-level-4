
/*
 * Program: Number to Words Converter
 * Converts a numeric input (up to billions) into its English text representation.
 */


#include<iostream>
using namespace std;




string MappingNumber(int number) {
	if (number == 1)
		return "One";
	if (number == 2)
		return "Two";
	if (number == 3)
		return "Three";
	if (number == 4)
		return "Four";
	if (number == 5)
		return "Five";
	if (number == 6)
		return "Six";
	if (number == 7)
		return "Seven";
	if (number == 8)
		return "Eight";
	if (number == 9)
		return "Nine";
	if (number == 10)
		return "Ten";
	if (number == 11)
		return "Eleven";
	if (number == 12)
		return "Twelve";
	if (number == 13)
		return "Thirteen";
}


long long ReadNumber() {
	long long number;
	cout << "Enter Number \n";
	cin >> number;
	return number;
}



string NumberToText(long long number) {

	if (number == 0)
		return "";
	if (number >= 1 && number <= 13)
		return MappingNumber(number);
	else if (number >= 20 && number <= 99)
	{
		string arr[] = {
"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty"
,"Ninety" };
		return arr[number / 10] + " " + NumberToText(number % 10);
	}
	else if (number > 13 && number <= 19)
		return NumberToText(number % 10) + "teen";
	else if (number >= 100 && number <= 199)
		return "One Hundred " + NumberToText(number % 100);
	else if (number >= 200 && number <= 999)
		return NumberToText(number / 100) + " " + "Hundred " + NumberToText(number % 100);
	else if (number >= 1000 && number <= 1999)
		return "One Thousand " + NumberToText(number % 1000);
	else if (number >= 2000 && number <= 999999)
		return NumberToText(number / 1000) + " " + "Thousand " + NumberToText(number % 1000);
	else if (number >= 1000000 && number <= 1999999)
		return "One Million " + NumberToText(number % 1000000);
	else if(number >= 2000000 && number <= 999999999)
		return NumberToText(number / 1000000) + " " + "Million " + NumberToText(number % 1000000);
	else if (number >= 1000000000 && number <= 1999999999)
		return "One Billion " + NumberToText(number % 1000000000);
	else
		return NumberToText(number / 1000000000) + " Billion " + NumberToText(number % 1000000000);
}

int main() {
	cout << NumberToText(ReadNumber());
	system("pause > 0");
}