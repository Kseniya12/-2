#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;


int main()
{
	cout << "x = " << x << endl;
	f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << setprecision(4) << result << endl;
}
