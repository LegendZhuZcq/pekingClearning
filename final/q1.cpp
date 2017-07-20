#include <iostream>
using namespace std;

int main() {
	int year;
	bool isYear = false;
	cin >> year;
	if ((year % 4 == 0)) isYear = true;
	if ((year % 100 == 0) && !(year % 400 == 0)) isYear = false;
	if (year % 3200 == 0) isYear = false;
	(isYear) ? cout << "Y" : cout << "N";
	return 0;
}
