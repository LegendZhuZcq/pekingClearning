#include<iostream>
using namespace std;
int main()
{
	char s[80];
	int counts[5] = { 0 };
	cin.getline(s, 80);
	for (int i = 0; i < 80; i++) {
		//cout << s[i] << " " << int(s[i]) << endl;
		switch (int(s[i])) {
		case 97 : counts[0]++; break;
		case 101 : counts[1]++; break;
		case 105 : counts[2]++; break;
		case 111: counts[3]++; break;
		case 117: counts[4]++; break;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << counts[i] << " ";
	}
	return 0;
}