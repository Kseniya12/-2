#include <iostream>
#include <iomanip> 
using namespace std;

double f(double x) {
	return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}

int main()
{
	double x = 10;
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f(x) << endl;

	cout << "x = ";
	cin >> x;
	cout << "f = " << setprecision(4) << f(x) << endl;
}

