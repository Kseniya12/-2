#include <iostream>
#include <iomanip> 
using namespace std;

double x, result;

void f() {
	result = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}
