#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double x = 0.0, result;

	result = acos(x);
	cout << "acos(x) = " << result << " radians" << endl;

	// result in degrees
	cout << "acos(x) = " << result * 180 / 3.1415 << " degrees" << endl;

	_getch();
	return 0;
}