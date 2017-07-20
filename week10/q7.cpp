#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n = 1;
	while (1) {
		cin >> n;
		if (n == 0) break;
		else { 
			vector<int> v = { 0 };
			for (int i = 0; i < n; i++) {
				int input;
				cin >> input;
				v.push_back(input);
				nth_element(v.begin(), v.begin() + v.size() / 2 + 1, v.end());
			}
			int median = v[v.size() / 2];
			if (n % 2 == 0) median = (median + v[v.size() / 2 + 1]) / 2;
			cout << median << endl;
		}
		
	}
	return 0;
}