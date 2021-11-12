#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
	double x = 10;

	double f = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f << endl;

	cout << "x = ";
	cin >> x;
	f = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	cout << "f = " << setprecision(4) << f << endl;

}