#include<iostream>
using namespace std;
int main()
{
	double n;
	double k;
	while (cin >> n >> k)
	{
		double y = 1;

		double M = 200;

		double All = n;
		while (true)
		{
			All += n;
			M *= (1 + k / 100);
			if (All>M)
			{
				cout << y + 1 << endl;
				break;
			}
			if (y>19)
			{
				cout << "Impossible" << endl;
				break;
			}
			y++;
		}
	}
	return 0;
}