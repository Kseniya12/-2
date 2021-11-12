#include <iostream>
#include <iomanip> 
using namespace std;

extern double x;
extern double result;

void f();

int main()
{
	x = 10;
	cout << "x = " << x << endl;
	f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << setprecision(4) << result << endl;


}
