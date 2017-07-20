#include <iostream>

using namespace std;

int main() {
	int number;
	while (cin >> number) {
		if (number % 3 == 0) cout << "3 ";
		if (number % 5 == 0) cout << "5 ";
		if (number % 7 == 0) cout << "7";
		if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0) cout << "n";
		cout << endl;
	}
	return 0;
}