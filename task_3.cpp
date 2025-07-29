#include <iostream>
#include <vector>
using namespace std;

int quantity_of_zer_and_one(int x, int massive[]) {
	int cnt = 0;
	for (int i = 0; i < x; i++){
		if (massive[i] == 0) {
			cnt++;
		}
	}
	return cnt;
}


int main()
{
	srand(time(0));
	int mass[100];
	int mass1[1000];
	int mass2[10000];


	for (int i = 0; i < 100; i++) {
		mass[i] = rand() % 2;
	}

	for (int i = 0; i < 1000; i++) {
		mass1[i] = rand() % 2;
	}

	for (int i = 0; i < 10000; i++) {
		mass2[i] = rand() % 2;
	}
	
	int num1 = quantity_of_zer_and_one(100, mass);
	int num2 = quantity_of_zer_and_one(1000, mass1);
	int num3 = quantity_of_zer_and_one(10000, mass2);
	
	cout << "quantity of 0 to quantity of 1 in mass[100]: " << num1 << '/' << 100-num1 << endl;
	cout << "quantity of 0 to quantity of 1 in mass[1000]: " << num2 << '/' << 1000 - num2 << endl;
	cout << "quantity of 0 to quantity of 1 in mass[10000]: " << num3 << '/' << 10000 - num3 << endl;

	
}
