#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;
int main()
{
	cout << "x = " << x << endl;
	Nezhivleva::f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	Nezhivleva::f();
	cout << "f = " << setprecision(4) << result << endl;
}
