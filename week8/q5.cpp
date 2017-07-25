#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 10; i < n + 1; i++) {
		int m = i % 10;
		int k = i / 10;
		if (i % (m + k) == 0) cout << i << endl;
	}
	return 0;
}