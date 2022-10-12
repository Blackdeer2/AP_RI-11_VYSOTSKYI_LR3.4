#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ((y <= sqrt(R * R - x * x) && y >= x && x >= 0) || (y >= -sqrt(R * R - x * x) && y <= x && x <= 0)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}