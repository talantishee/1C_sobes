#include <iostream>
#include <vector>
using namespace std;



int main()
{
	srand(time(0));
	int mass[100];

	for (int i = 0; i < 100; i++) {
		if (rand() % 2 == 0) {
			mass[i] = rand() * -1;
		}
		else {
			mass[i] = rand();
		}
	}

	vector<int> positive;
	vector<int> negative;

	for (int i = 0; i < 100; i++) {
		if (mass[i] > 0) {
			positive.push_back(mass[i]);
		}
		else if (mass[i] < 0) {
			negative.push_back(mass[i]);
		}
	}

	cout << "Negative mass:" << endl;
	for (int i = 0; i < negative.size(); i++) {
		if (i == negative.size() - 1) {
			cout << negative[i];
		}
		else {
			cout << negative[i] << "; ";
		}
	}
	cout << "\n\n\n";
	cout << "Positive mass:" << endl;
	for (int i = 0; i < positive.size(); i++) {
		if (i == positive.size() - 1) {
			cout << positive[i];
		}
		else {
			cout << positive[i] << "; ";
		}
	}
}
