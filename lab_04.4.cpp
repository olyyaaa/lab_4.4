// lab_04.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double xp; // вхідний аргумент
	double xk; // вхідний аргумент
	double dx; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "     Table    " << endl;
	cout << "--------------" << endl;
	cout << "|" << setw(6) << "y" << setw(6) << " |" << endl;
	cout << "--------------" << endl;
	// розгалуження в повній формі
	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - (x + 7) * (x + 7));
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = (-R * x) / 4;
	if (0 < x < 4 * atan(1.0))
		y = sin(x);
	else
		y = x - atan(1.0);
	cout << " |" << setw(6) << y << " |" << endl;
	cout << endl;
	cin.get();
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
