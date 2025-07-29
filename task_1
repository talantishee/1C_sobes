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

	int maxx = mass[0];
	int maxx_id = 0;
	int minn = mass[0];
	int minn_id = 0;

	for (int i = 0; i < 100; i++) {
		if (mass[i] < minn) {
			minn = mass[i];
			minn_id = i;
		}
		if (mass[i] > maxx) {
			maxx = mass[i];
			maxx_id = i;
		}
	}

	vector<pair<int,int> > mass_of_maxx;
	vector<pair<int, int> > mass_of_minn;

	for (int i = 0; i < 100; i++) {
		if (maxx == mass[i]) {
			mass_of_maxx.push_back(make_pair(mass[i], i));
		}
		if (minn == mass[i]) {
			mass_of_minn.push_back(make_pair(mass[i], i));
		}
	}

	cout << "Max numbers:" << endl;
	cout << "num" << "   " << "ind" << endl;
	for (int i = 0; i < mass_of_maxx.size(); i++) {
		cout << mass_of_maxx[i].first << "   " << mass_of_maxx[i].second << endl;
	}
	cout << "\n\n\n";
	cout << "Min numbers:" << endl;
	cout << "num" << "   " << "ind" << endl;
	for (int i = 0; i < mass_of_minn.size(); i++) {
		cout << mass_of_minn[i].first << "   " << mass_of_minn[i].second << endl;
	}
}
