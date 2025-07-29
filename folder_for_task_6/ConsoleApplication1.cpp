#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>



using namespace std;



int main()
{
	string line;
	double mass[100];
	ifstream in("input.txt");
	for (int i = 0; i < 100; i++) {
		getline(in, line);
		mass[i] = stod(line);
	}
	in.close();

	ofstream out;
	out.open("tsk_6.txt");
	for (int i = 0; i < 100; i++) {
		out << fixed << setprecision(2) << mass[i] << ';' << mass[i] * 0.18 << endl;
	}
	

	out.close();
}