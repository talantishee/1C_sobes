#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>




using namespace std;



int main()
{
	string line;
	double mass[100];
	ifstream in("input.txt");
    for (int i = 0; i < 100; i++) {
        string line;
        getline(in, line);

        char delimiter = ';';
        vector<string> nums;
        string num;
        stringstream ss(line);

        while (getline(ss, num, delimiter)) {
            nums.push_back(num);
        }

        if ((round(stod(nums[0]) * 0.18 * 100.0) / 100.0) == stod(nums[1])) {
            cout << "18% from " << nums[0] << " (" << (round(stod(nums[0]) * 100.0) / 100.0) * 0.18 << ")" << " is " << nums[1] << " - True " << endl;
        }
        else {
            cout << "18% from " << nums[0] << " (" << (round(stod(nums[0]) * 100.0) / 100.0) * 0.18 << ")" << " is " << nums[1] << " - False " << endl;
        }
    }
	in.close();
	
}
