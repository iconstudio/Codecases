#include <iostream>

using namespace std;


int main() {
	int* numbers = new int[9];

	for (int i = 0; i < 9; ++i) {
		cin >> numbers[i];
	}

	int norder = 0, nmax = 1, temp;
	for (int j = 0; j < 9; ++j) {
		temp = numbers[j];

		if (nmax <= temp) {
			nmax = temp;
			norder = j;
		}
	}

	cout << nmax << "\n" << norder + 1;

	return 0;
};
