#include <iostream>

using namespace std;


int main() {
	int Count;
	cin >> Count;


	int* Grade = new int[Count], BestGrade = 0, temp;
	for (int k = 0; k < Count; ++k) {
		cin >> temp;
		if (BestGrade <= temp) {
			BestGrade = temp;
		}
		Grade[k] = temp;
	}


	float NewSummary = 0, NewTemp;
	for (int i = 0; i < Count; ++i) {
		NewTemp = (float)Grade[i] / (float)BestGrade;
		NewSummary += NewTemp * 100;
	}


	float Result = NewSummary / Count;
	//cout << "count: " << Count << "\tBest: " << BestGrade << "\tSummary: " << NewSummary << endl;
	cout << Result;

	return 0;
};
