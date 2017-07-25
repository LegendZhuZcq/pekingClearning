#include <iostream>  
#include <algorithm>  
using namespace std;

int main()
{

	int n; cin >> n;
	while (n != 0)
	{
		int *arr = new int[n];
		for (int i = 0; i<n; ++i)
			cin >> arr[i];

		sort(arr, arr + n);

		int mid = n >> 1;
		if (n & 1 == 1)
			cout << arr[mid] << endl;
		else
			cout << ((arr[mid - 1] + arr[mid]) >> 1) << endl;

		cin >> n;
	}
	return 0;
}
