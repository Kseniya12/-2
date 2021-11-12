#include <iostream>
#include <iomanip> 
using namespace std;

void f(const double&, double&);

int main()
{
	double x = 10, result;
	cout << "x = " << x << endl;
	f(x, result);
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	f(x, result);
	cout << "f = " << setprecision(4) << result << endl;


}

void f(const double& x, double& result) {
	result = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}

