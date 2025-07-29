#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>


using namespace std;



int main()
{
	ofstream out;
	out.open("tsk_5");
	srand(time(0));

	for (int i = 0; i < 100; i++) {
		double x = rand() / 3.0;
		out << fixed << setprecision(2)<< x << endl;
	}

	out.close();
}