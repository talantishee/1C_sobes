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
	ofstream out;
	out.open("tsk_6.txt");
	for (int i = 0; i < 100; i++) {
		getline(in, line);
		out << fixed << setprecision(2) << stod(line) << ';' << stod(line) * 0.18 << endl;
	}
	out.close();
	in.close();
	
}