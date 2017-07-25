#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int n;
	double x[100], y[100], dis=0;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> x[i] >> y[i];
		for (int j = 0; j < i + 1; j++) {
			double currentDis = sqrt(pow((x[i] - x[j]),2)+ pow((y[i] - y[j]),2));
			(currentDis > dis) ? dis = currentDis:dis=dis;
		}

	}
	cout << fixed << setprecision(4) << dis << endl;
	return 0;
}
