#include <iostream>
#include <vector>
using namespace std;



int main()
{
	srand(time(0));
	int mass[100];

	for (int i = 0; i < 100; i++) {
		mass[i] = rand();
	}

	int ans[7];

	for (int i = 0; i < 7; i++) {
		ans[i] = 0;
	}

	for (int i = 0; i < 100; i++) {
		if (0 <= mass[i] && mass[i] <= 10) {
			ans[0] ++;
		}
		else if (11 <= mass[i] && mass[i] <= 100) {
			ans[1] ++;
		}
		else if (101 <= mass[i] && mass[i] <= 1000) {
			ans[2] ++;
		}
		else if (1001 <= mass[i] && mass[i] <= 10000) {
			ans[3] ++;
		}
		else if (10001 <= mass[i] && mass[i] <= 100000) {
			ans[4] ++;
		}
		else if (100001 <= mass[i] && mass[i] <= 1000000) {
			ans[5] ++;
		}
		else {
			ans[6]++;
		}
	}

	cout << "Nums 0 - 10: " << ans[0] << endl;
	cout << "Nums 11 - 100: " << ans[1] << endl;
	cout << "Nums 101 - 1000: " << ans[2] << endl;
	cout << "Nums 1001 - 10000: " << ans[3] << endl;
	cout << "Nums 10001 - 100000: " << ans[4] << endl;
	cout << "Nums 100001 - 1000000: " << ans[5] << endl;
	cout << "Nums > 1000000 " << ans[6] << endl;
}
