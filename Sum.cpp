#include <cmath>
#include "Dod.h"
#include "Sum.h"
#include "Var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = (x - 1) / x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (abs(a) > e);
}