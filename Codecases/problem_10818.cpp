#include <iostream>

using namespace std;

int main() {
	int count;
	int nmin = 1000000, nmax = -1000000;

	cin >> count;

	int i, temp;
	for (i = 0; i < count; ++i) {
		cin >> temp;

		if (temp < nmin) {
			nmin = temp;
		}
		
		if (nmax < temp) {
			nmax = temp;
		}
	}

	cout << nmin << " " << nmax;

	return 0;
};
