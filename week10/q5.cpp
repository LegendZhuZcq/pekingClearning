#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 0;
	int cell[100][100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> cell[i][j];
		}
	}

	for (int i = 1; i < (n - 1); i++) {
		for (int j = 1; j < (n-1); j++) {
			int dif1 = cell[i - 1][j] - cell[i][j];
			int dif2 = cell[i + 1][j]- cell[i][j];
			int dif3 = cell[i][j - 1] -cell[i][j];
			int dif4 = cell[i][j + 1]- cell[i][j];
			if (dif1 >= 50 && dif2 >= 50 && dif3 >= 50 && dif4 >= 50) count++;
		}
	}
	cout << count << endl;

	return 0;
}