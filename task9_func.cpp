#include <iostream>
#include "func.h"
double x = 10;
double result = 0;

namespace Nezhivleva {
	void f() {
		result = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x + 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	}
}
