#include <iostream>
#include <iomanip> 
using namespace std;
double f(double x);

int main()
{
	double x = 10;

	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f(x) << endl;

	cout << "x = ";
	cin >> x;
	cout << "f = " << setprecision(4) << f(x) << endl;
}
