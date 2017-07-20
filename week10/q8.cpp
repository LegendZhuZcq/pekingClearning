#include <iostream>
using namespace std;

class TreeSection {
	public:
		int high=0;
		int low=0;
		int getTreeNumber() { return (high - low+1); }
};


int main() {
	TreeSection treeSections[100];
	int l, m;
	cin >> l >> m;
	int sectionNo = 0;
	for (int i = 0; i < m; i++) {
		int inputLow, inputHigh;
		bool overlapping = false;
		cin >> inputLow >> inputHigh;
		for (int j = 0; j < m; j++) {
			if ((inputLow>=treeSections[j].low && inputLow<=treeSections[j].high)||(inputHigh<=treeSections[j].high && inputHigh>=treeSections[j].low)) {
				treeSections[j].low = (treeSections[j].low < inputLow) ? treeSections[j].low : inputLow;
				treeSections[j].high = (treeSections[j].high > inputHigh) ? treeSections[j].high : inputHigh;
				overlapping = true;
				break;
			}
		}
		if (!overlapping) {
			treeSections[sectionNo].high = inputHigh;
			treeSections[sectionNo].low = inputLow;
			sectionNo++;
		}
	}
	//calculating the tree number
	int cutTree = 0;
	for (int i = 0; i < sectionNo; i++) {
		cutTree += treeSections[i].getTreeNumber();
	}
	cout << (l+1 - cutTree) << endl;

	return 0;
}