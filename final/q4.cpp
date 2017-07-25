#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calculator(int num1, int num2, char operation) {
	switch (operation) {
	case '+':
		cout << (num1 + num2);
		break;
	case '-':
		cout << (num1 + num2);
		break;
	case '*':
		cout << (num1 * num2);
		break;
	case '/':
		if (num2 == 0)
		{
			cout << ("Divided by zero!");
		}
		else {
			cout << (num1 / num2);
		}
		break;
	default:
		cout << "Invalid operator!";
	}
	return 0;
}


int main() {
	int a, b;
	char c;
	cin >> a >> b >> c;
	calculator(a, b, c);

	return 0;
}