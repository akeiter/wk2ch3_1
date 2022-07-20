#include <iostream>
using namespace std;
string leapChecker(int);

int main()
{
	int year;
	cout << "Enter the current year: ";
	cin >> year;

	cout << "You entered " << year << " as the year which " << leapChecker(year);


}

string leapChecker(int y)
{
	if (y % 4 == 0)
	{
		if (y % 400 == 0)
		{
			return "is a leap year.";
		}
		else if (y % 100 == 0) {
			return "is NOT a leap year.";
		}
		return "is a leap year.";
	}
	return "is NOT a leap year.";
}