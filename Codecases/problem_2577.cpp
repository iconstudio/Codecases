#include <iostream>

using namespace std;


int main() {
	int A, B, C, M, Orig;

	cin >> A >> B >> C;

	M = A * B * C;
	Orig = M;

	int* Result = new int[10]{0}; // 0 ~ 9

	int temp;
	while (0 < M) {
		temp = M % 10;
		Result[temp]++;

		M /= 10;
	}

	//cout << Orig << endl;
	for (int i = 0; i < 10; ++i) {
		cout << Result[i] << endl;
	}

	return 0;
}
