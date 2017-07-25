#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	cin >>n>> m;
	int a[100];
	for (int i = m; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}