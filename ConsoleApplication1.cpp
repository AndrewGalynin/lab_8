#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
	int min, max;
	float h, y, x, c;
	int h = 0;
	
	cout << "Enter [min; max], c and h" << endl;
	cin >> min >> max >> c >> h;
	
	cout << "while" << endl;
	x = min;
	while (x <= max + h / 2)
	{
		y = pow(x, 3) + pow(x, 1 / 2) - 3 * c;
		cout << setw(10) << "x= " << x << setw(10) << "y= " << y << endl;
		x += h;
	}

	cout << "do...while" << endl;
	x = min;
	do
	{
		y = pow(x, 3) + pow(x, 1 / 2) - 3 * c;
		cout << setw(10) << "x= " << x << setw(10) << "y= " << y << endl;
		x += h;
	}
	while (x <= max + h / 2);
}


